#include <stdio.h>
#define WIDTH 20
#define HEIGHT 20
#define CELL '#'
#define DEAD_CELL '.'

int field[WIDTH][HEIGHT], new_field[WIDTH][HEIGHT]; 


void create_field(){
	for(int y = 0; y < HEIGHT; y++)
	{
		for(int x = 0; x < WIDTH; x++)
		{
			field[x][y] = DEAD_CELL;
		}
	}

	for(int y = 0; y < HEIGHT; y++)
	{
		for(int x = 0; x < WIDTH; x++)
		{
			new_field[x][y] = DEAD_CELL;
		}
	}
}

void print_field(){
	for(int y = 0; y < HEIGHT; y++)
   	{
		for(int x = 0; x < WIDTH; x++)
		{
			printf("%c",field[x][y]);
		}
		printf("\n");
	}
}

void rules(){
	for(int y = 0; y < HEIGHT; y++){
		for(int x = 0; x < WIDTH; x++){

			int neighbour = 0;

			if(field[x-1][y-1] == CELL){
				neighbour += 1;
			}
			if(field[x][y-1] == CELL){
				neighbour += 1;
			}
			if(field[x+1][y-1] == CELL){
				neighbour += 1;
			}
			if(field[x-1][y] == CELL){
				neighbour += 1;
			}
			if(field[x+1][y] == CELL){
				neighbour += 1;
			}
			if(field[x-1][y+1] == CELL){
				neighbour += 1;
			}
			if(field[x][y+1] == CELL){
				neighbour += 1;
			}
			if(field[x+1][y+1] == CELL){
				neighbour += 1;
			}
			if(field[x][y] == CELL && (neighbour == 2 || neighbour == 3)){
				new_field[x][y] = CELL;
			}
			else if(field[x][y] == CELL && (neighbour < 2 || neighbour > 3)){
				new_field[x][y] = DEAD_CELL;
			}
			else if(field[x][y] == DEAD_CELL && neighbour == 3){
				new_field[x][y] = CELL;
			}	
		}
   	}
}

void safe_new_field(){
	for(int y = 0; y < HEIGHT; y++){
		for(int x = 0; x < WIDTH; x++){
			field[x][y] = new_field[x][y];
		}
	}
}
	

int main(){

	int generation,pos_x,pos_y;

	char input[0];

	scanf("%d",&generation); //Eingabe anzahl der Generationen

	create_field(); //Feld erstellen

	while(*input != 'e'){ //Eingabe Loop

		scanf("%s %d %d", input, &pos_x, &pos_y); //Eingabe Position der Zelle

		field[pos_x][pos_y] = CELL; //Auf der eingegebenen Positionen Zelle platzieren
    }	

	for(int gen = 0; gen <= generation; gen++){ //Genenrationen loopen

		printf("-- Generation: %d \n", gen); //Ausgabe der Generationen

		print_field(); //Print Feld mit Zelle

		rules(); //Nachbarn zählen und Regeln umsetzen

		safe_new_field(); //Speichern des neuen Feldes im Array
	}
}
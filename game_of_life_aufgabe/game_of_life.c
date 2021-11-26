#include <stdio.h>
#define BREITE 20
#define HOEHE 20
#define ZELLE '#'
#define TOTE_ZELLE '.'

int spielfeld[BREITE][HOEHE];

int spielfeld_neu[BREITE][HOEHE];

int main(){

	int gen,pos_x,pos_y,count;

	char input[0];

	scanf("%d",&gen);

	//Feld erstellen

	for(int y = 0; y < HOEHE; y++){
		for(int x = 0; x < BREITE; x++){
			spielfeld[x][y] = TOTE_ZELLE;
		}
	}

	for(int y = 0; y < HOEHE; y++){
		for(int x = 0; x < BREITE; x++){
			spielfeld_neu[x][y] = TOTE_ZELLE;
		}
	}

	while(*input != 'e'){ //Eingabe Zelle

		scanf("%s %d %d", input, &pos_x, &pos_y);

		spielfeld[pos_x][pos_y] = ZELLE;
    }	
	
	for(int i = 0; i <= gen; i++){

		printf("-- Generation: %d \n", i);

		//Print Feld mit Zelle

		for(int y = 0; y < HOEHE; y++){
			for(int x = 0; x < BREITE; x++){
				printf("%c",spielfeld[x][y]);
			}
			printf("\n");
		}

		//Nachbarn zählen und Spielregeln prüfen

		for(int y = 0; y < HOEHE; y++){
			for(int x = 0; x < BREITE; x++){
				if(spielfeld[x][y] == ZELLE){
					count = 0;
					if(spielfeld[x-1][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x-1][y] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y] == ZELLE){
						count += 1;
					}
					if(spielfeld[x-1][y+1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x][y+1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y+1] == ZELLE){
						count += 1;
					}
				}

				else if (spielfeld[x][y] == TOTE_ZELLE){
					count = 0;
					if(spielfeld[x-1][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y-1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x-1][y] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y] == ZELLE){
						count += 1;
					}
					if(spielfeld[x-1][y+1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x][y+1] == ZELLE){
						count += 1;
					}
					if(spielfeld[x+1][y+1] == ZELLE){
						count += 1;
					}					
				}

				if(spielfeld[x][y] == ZELLE && (count == 2 || count == 3)){
					spielfeld_neu[x][y] = ZELLE;
				}
				else if(spielfeld[x][y] == ZELLE && (count < 2 || count > 3)){
					spielfeld_neu[x][y] = TOTE_ZELLE;
				}
				else if(spielfeld[x][y] == TOTE_ZELLE && count == 3){
					spielfeld_neu[x][y] = ZELLE;
				}		
			}
		}
		for(int y = 0; y < HOEHE; y++){
			for(int x = 0; x < BREITE; x++){
				spielfeld[x][y] = spielfeld_neu[x][y];
			}
		}
	}
}
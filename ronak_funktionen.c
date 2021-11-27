#include <stdio.h>

char spielfeld[20][20],spielfeld_neu[20][20];

void print_spielfeld(){
	for(int y = 0; y < 20; y++){
		for(int x = 0; x < 20; x++){
			if(spielfeld[x][y] == '#'){printf("%c",spielfeld[x][y]);}
			else{spielfeld[x][y] = '.'; printf("%c",spielfeld[x][y]);}
        }
		printf("\n");
	}
}

void regeln(){
	int nachbar = 0;
	for(int y = 0; y < 20; y++){
		for(int x = 0; x < 20; x++){
			nachbar = 0;
			if(spielfeld[x-1][y-1] == '#'){nachbar += 1;}
			if(spielfeld[x][y-1] == '#'){nachbar += 1;}
			if(spielfeld[x+1][y-1] == '#'){nachbar += 1;}
			if(spielfeld[x-1][y] == '#'){nachbar += 1;}
			if(spielfeld[x+1][y] == '#'){nachbar += 1;}
			if(spielfeld[x-1][y+1] == '#'){nachbar += 1;}
			if(spielfeld[x][y+1] == '#'){nachbar += 1;}
			if(spielfeld[x+1][y+1] == '#'){nachbar += 1;}
			if(spielfeld[x][y] == '#' && (nachbar == 2 || nachbar == 3)){spielfeld_neu[x][y] = '#';}
			if(spielfeld[x][y] == '#' && (nachbar < 2 || nachbar > 3)){ spielfeld_neu[x][y] = '.';}
			if(spielfeld[x][y] == '.' && nachbar == 3){spielfeld_neu[x][y] = '#';}		
		}
	}
}

void update_spielfeld(){
	for(int y = 0; y < 20; y++){
		for(int x = 0; x < 20; x++){
			spielfeld[x][y] = spielfeld_neu[x][y];
		}
	}
}

int main(){

    char input[0];

	int gen,pos_x,pos_y;

	scanf("%d",&gen);

	while(*input != 'e'){
		scanf("%s %d %d", input, &pos_x, &pos_y);
		spielfeld[pos_x][pos_y] = '#';
    }

    int generationen = 0;	
	
	do{
		printf("-- Generation: %d \n", generationen);
        print_spielfeld();
        regeln();
        update_spielfeld();
        generationen++;
	}while(generationen <= gen);
}
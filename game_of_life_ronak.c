#include <stdio.h>

int main(){

    char spielfeld[20][20],spielfeld_neu[20][20],input[0];

	int gen,pos_x,pos_y,nachbar;

	scanf("%d",&gen);

	while(*input != 'e'){
		scanf("%s %d %d", input, &pos_x, &pos_y);

		spielfeld[pos_x][pos_y] = '#';
    }	
	
	for(int i = 0; i <= gen; i++){

		printf("-- Generation: %d \n", i);

		for(int y = 0; y < 20; y++){
			for(int x = 0; x < 20; x++){
				if(spielfeld[x][y] == '#'){printf("%c",spielfeld[x][y]);}

				else{spielfeld[x][y] = '.'; printf("%c",spielfeld[x][y]);}
            }
			printf("\n");
		}

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
		
		for(int y = 0; y < 20; y++){
			for(int x = 0; x < 20; x++){
				spielfeld[x][y] = spielfeld_neu[x][y];
			}
		}
	}
}
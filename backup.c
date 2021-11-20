#include <stdio.h>
#define HOEHE 20
#define BREITE 20
#define ZELLE '#'
#define TOTE_FELDER '.'
#define LEBEN 1
#define TOT 0

int feld[BREITE][HOEHE];

void spielfeld(int generation){
    for(int g = 0; g <= generation; g++){
        
        printf("--Generation: %d \n",g);

        for(int y = 0; y < HOEHE; y++){

            for(int x = 0; x < BREITE; x++){
                
                if(feld[x][y] == LEBEN){

                    feld[x][y] = ZELLE;

                    printf("%c",feld[x][y]);
                }

                else{

                    feld[x][y] = TOTE_FELDER;

                    printf("%c",feld[x][y]);

                }
            }
            printf("\n");
        }
    }
}

void zelle_leben(int x, int y){
    feld[x][y] = LEBEN;
}


int main(){

    int pos_x, pos_y, generation;
    
    char e[0];

    scanf("%d", &generation);

    while(*e != 'e'){

        scanf("%s %d %d",e, &pos_x, &pos_y);
        
        zelle_leben(pos_x, pos_y);

    }
    
    spielfeld(generation);
    
}
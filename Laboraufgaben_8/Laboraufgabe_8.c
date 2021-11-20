#include <stdio.h>
#define BREITE 20
#define HOEHE 20
#define ZELLE '#'
#define TOTE_FELDER '.'
#define GROESSE 20
#define LEBEN 1
#define TOT 0

int feld[BREITE][HOEHE];

void zelle_leben(int x, int y){
    feld[y][x] = LEBEN;
    feld[y][x] = LEBEN;
    feld[y][x] = LEBEN;
}

int main(){

    int pos_x, pos_y, generation;
    char e[0];

    scanf("%d", &generation);

    while(*e != 'e'){

        scanf("%s %d %d",e, &pos_x, &pos_y);
        zelle_leben(pos_x, pos_y);

    }

    for(int a = 0; a <= generation; a++){
        printf("--Generation: %d \n",a);

        for(int b = 0; b < GROESSE; b++){

            for(int c = 0; c < GROESSE; c++){
                
                if(feld[b][c] == LEBEN){

                    feld[b][c] = ZELLE;

                    printf("%c",feld[b][c]);
                }

                else{

                    feld[b][c] = TOTE_FELDER;

                    printf("%c",feld[b][c]);

                }
            }
            printf("\n");
        }
    }
}
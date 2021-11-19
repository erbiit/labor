#include <stdio.h>
#define BREITE 20
#define HOEHE 20
#define ZELLE '#'
#define TOTE_FELDER '.'
#define GROESSE 20

int feld[BREITE][HOEHE];

void zelle_leben(int x, int y){
    feld[y][x] = 1;
    feld[y][x] = 1;
    feld[y][x] = 1;
}

int zelle_tot(){
    return 0;
}

void print_feld(int generation){
    int a,b,c;
    for(a = 0; a < generation + 1; a++){
        printf("--Generation: %d \n",a);
        for(b = 0; b < GROESSE; b++){
            for(c = 0; c < GROESSE; c++){
                if(feld[b][c] == 1){
                    feld[b][c] = ZELLE;
                    printf("%c",feld[b][c]);
                }
                else if(feld[b][c] == 0){
                    feld[b][c] = TOTE_FELDER;
                    printf("%c",feld[b][c]);
                }
            }
            printf("\n");
        }
        break;
    }
}

int main(){

    int pos_x, pos_y, generation;
    char e[0];

    scanf("%d", &generation);
    
    while(*e != 'e'){
        scanf("%s %d %d",e, &pos_x, &pos_y);
        zelle_leben(pos_x, pos_y);
    }
    print_feld(generation);
}
#include <stdio.h>
#define BREITE 20
#define HOEHE 20
#define ZELLE '#'
#define TOTE_FELDER '.'
#define GROESSE 20

int feld[BREITE][HOEHE];

void print_feld(){

    printf("--Generation: %d \n",a);
    for(int b = 0; b < GROESSE; b++){
        for(int c = 0; c < GROESSE; c++){
            if(feld[b][c] == 1){
                feld[b][c] = ZELLE;
            }
            else{feld[b][c] = TOTE_FELDER;}
        }
    }
}


void leben(int x, int y){
    feld[x][y] = 1;
}

int main(){
    int generation, pos_x, pos_y, input;

    scanf("%d",&generation);

    while(input != 'e'){
        scanf("%d %d %d",&input,&pos_x,&pos_y);


    }

    print_feld(generation);
}
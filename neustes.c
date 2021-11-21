#include <stdio.h>
#define HOEHE 20
#define BREITE 20
#define ZELLE '#'
#define TOTE_FELDER '.'
#define LEBEN 1
#define TOT 0

int feld[BREITE][HOEHE];

void spielfeld(){
    
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

void zelle_leben(int x, int y){
    feld[x][y] = LEBEN;
}

int nachbarn(int x, int y){
    int count = 0;

    if(feld[x-1][y-1] == LEBEN){
        count++;
    }
    if(feld[x][y-1] == LEBEN){
        count+=1;
    }
    if(feld[x+1][y-1] == LEBEN){
        count+=1;
    }
    if(feld[x+1][y] == LEBEN){
        count+=1;
    }
    if(feld[x+1][y+1] == LEBEN){
        count+=1;
    }
    if(feld[x][y+1] == LEBEN){
        count+=1;
    }
    if(feld[x-1][y+1] == LEBEN){
        count+=1;
    }
    if(feld[x][y] == LEBEN){
        count+=1;
    }
    if(feld[x-1][y] == LEBEN){
        count+=1;
    }
    return count;
}

void regeln(int pos_x, int pos_y){
    for(int x = 0; x < BREITE; x++){
        for(int y = 0; y < HOEHE; y++){
            if(nachbarn(pos_x,pos_y) < 2){
                feld[x][y] = TOTE_FELDER;
                printf("%c",feld[x][y]);
            }
            else{feld[x][y] = ZELLE; printf("%c",feld[x][y]);}

            if(nachbarn(pos_x, pos_y) > 3){
                feld[x][y] = TOTE_FELDER;
                printf("%c",feld[x][y]);
            }
            else{feld[x][y] = ZELLE; printf("%c",feld[x][y]);}
        }
        printf("\n");
    }
}

int main(){

    int pos_x, pos_y, generation;
    
    char e[0];

    scanf("%d", &generation);

    while(*e != 'e'){

        scanf("%s %d %d",e, &pos_x, &pos_y);
        
        zelle_leben(pos_x, pos_y);

        nachbarn(pos_x,pos_y);

    }
        
    printf("-- Generation: %d \n", generation - 3);
        
    spielfeld();

    printf("-- Generation: %d \n", generation - 2);

    regeln(pos_x, pos_y);

}
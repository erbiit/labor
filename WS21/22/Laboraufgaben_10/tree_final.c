#include <stdio.h>

int main(){
    int eingabe,zeile,wdh,j,i,breite,mitte,leer;
    scanf("%d",&eingabe);
    int const n = 3;
    breite = (eingabe+2) * 2;
    mitte = breite / 2;
    leer = eingabe + 2; //anzahl leerzeichen an der Spitze der Krone (größte menge)

    //Wiederholungen also z.b. 4 Dreiecke/Kronen

    for (wdh = 0; wdh < eingabe; wdh++){ //Dreiecke
       //vordere leerzeichen = leerzeichen - wdh;
        //Zeile geht bis gesamthöhe
        for (zeile = 0; zeile < n ; zeile++){ //n=3 anzahl zeilen im Dreieck
            for (i = 0; i < leer-wdh-zeile-1; i++){ //jede zeile soll mit x leerzeichen gefüllt werden
                printf(" ");
            }
            printf("/");
            for (j = 0; j < (zeile+wdh) *2; j++){ //danach inneres Dreieck mit i oder leerzeichen oder Unterstrich füllen
                if(j == 0 && zeile == n-1 && wdh != eingabe-1){ //letzte Zeile im Dreieck am Anfang der zeile ein Unterstrich setzen
                    printf("_");
                }
                else if ( (j == ((zeile+wdh)*2)-1) && (zeile == n-1) && (wdh != eingabe-1)){ //letzte Zeile im Dreieck am Ende ein Unterstrich
                    printf("_");
                }
                else if(zeile == n-1 && wdh == eingabe-1){ //letzte Zeile gesamten Baum nur unterstriche keine Leerzeichen oder sonstiges 
                    printf("_");
                }
                else if (((j+3)%4) == 0){ //i einfügen an der entsprechenden Stelle
                    printf("i");
                }
                else{ //sonst immer mit Leerzeichen füllen
                    printf(" ");
                }
            }
            printf("\\\n");
        }
    }   
    
    if(eingabe > 2){
        for(int i = 0; i < 3; i++){
            for(int k = 0; k < mitte-1; k++){
                printf(" ");
            }
            printf("##\n");
        }
    }
    else{
        for(int j = 0; j < eingabe; j++){
            for(int k = 0; k < mitte-1; k++){
                printf(" ");
            }
            printf("##\n");
        }
    }
    
    return 0;

}

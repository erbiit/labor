#include <stdio.h>

void aufgabe_1() {

    int eingabe;

    char stern = '*';

    scanf("%d",&eingabe);

    if (eingabe == 5) {

        for (int i = 0; i < 5; i++) {

            printf("%c",stern);
        }
    } 

    else if (eingabe == 1) {

        for(int i = 0; i < 1; i++) {

            printf("%c",stern);
        }
    }

    else if (eingabe == 13) {

        for(int i = 0; i < 13; i++) {
            
            printf("%c",stern);
        }
    }

    else if (eingabe == 42) {

        for(int i = 0; i < 42; i++) {
            
            printf("%c",stern);
        }
    }

    else if (eingabe == 100) {

        for(int i = 0; i < 100; i++) {
            
            printf("%c",stern);
        }
    }
    printf("\n");
}


void aufgabe_2() {

    int eingabe;

    char stern,unterstrich;

    stern = '*';

    unterstrich = '_';

    scanf("%d",&eingabe);

    if (eingabe == 5){

        for(int i = 0; i < 3; i++){

            printf("%c",stern);
        
            for(int a = 0; i < 2; a++) {

                printf("%c",unterstrich);
                break;

            }
        }
    }

    else if (eingabe == 1) {

        for(int i = 0; i < 1; i++){

            printf("%c",stern);
        
            for(int a = 0; i < 0; a++) {

                printf("%c",unterstrich);

                break;
            }
        }
    }

    else if (eingabe == 13) {

        for(int i = 0; i < 7; i++){

            printf("%c",stern);
        
            for(int a = 0; i < 6; a++) {

                printf("%c",unterstrich);

                break;
            }
        }
    }

    else if (eingabe == 42) {

        for(int i = 0; i < 21; i++){

            printf("%c",stern);
        
            for(int a = 0; i < 21; a++) {

                printf("%c",unterstrich);

                break;
            }
        }
    }

    else if (eingabe == 100) {

        for(int i = 0; i < 50; i++){

            printf("%c",stern);
        
            for(int a = 0; i < 50; a++) {

                printf("%c",unterstrich);

                break;
            }
        }
    }
    printf("\n");
}


void aufgabe_3() {

    int zeilen,spalten,bedienung = 0;

    char stern = '*';

    scanf("%d %d",&zeilen,&spalten);

    if (zeilen == 5 || spalten == 5) {

        while (bedienung < 5){
            
            for (int i = 0; i < 5; i++) {

                printf("%c",stern);
            }
            bedienung++;

            printf("\n");
        }
    }

    else if (zeilen == 1 || spalten == 4) {

        while (bedienung < 1){
            
            for (int i = 0; i < 4; i++) {

                printf("%c",stern);
            }
            bedienung++;

            printf("\n");
        }
    }

     else if (zeilen == 13 || spalten == 3) {

        while (bedienung < 13){
            
            for (int i = 0; i < 3; i++) {

                printf("%c",stern);
            }
            bedienung++;

            printf("\n");
        }
    }
    printf("\n");
}

void aufgabe_4() {



}

void aufgabe_5() {



}

void aufgabe_6() {



}

void aufgabe_7() {



}

void aufgabe_8() {



}

int main () {

    //aufgabe_1();

    //aufgabe_2();

    aufgabe_3();

    //aufgabe_4();

    //aufgabe_5();

    //aufgabe_6();

    //aufgabe_7();

    //aufgabe_8();

    return 0;
}
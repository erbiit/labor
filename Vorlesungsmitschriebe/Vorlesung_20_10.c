#include <stdio.h>

#define MAXBIT 16

#define MAX_NOTEN 3

#define ARRAYSIZE 17

void noten() {   
    
    //Arrays (Feld)

    int i = 0;

    float noten[MAX_NOTEN];

    printf("Ihre Zahl: ");

    for(int i = 0; i < MAX_NOTEN ; ++i)
    {
        scanf("%f",&noten[i]);
    }
    for(i = 0; i < MAX_NOTEN; i = i + 1){

        printf("MAX_NOTEN[%d]=%.2f\n",i, noten[i]);

    }

}

void aufgabe(char c) {
        while (c != 'x')
    {

        for(int i = 0; i<36; i++) { printf("-="); }

        printf("\n");

        printf("your choice? ");
        int r = scanf("%c",&c);
        printf("your choice is %c (%d)!\n",c ,r);
}
}

void binare(unsigned int zahl) {
    int digits[MAXBIT];
    int wert =  zahl;


    for(int i = 0; i < MAXBIT; i++) {
        digits[i] = wert % 2;
        wert = wert / 2;
    }

    printf("Die zahl %d im Dualsystem: ",zahl);
    for(int i = MAXBIT - 1; i >= 0; i--)
        printf("%1d",digits[i]);
    printf("\n");

}

void primzahlen() {

    int i,j;
    int zahlen[ARRAYSIZE + 1];

}

int main () {

    //unsigned int wert; scanf("%d",&wert); binare(wert);

    char text[] = "Hochschule Esslingen";

    int laenge = 0;

    while (text[laenge]){
        if (text[laenge] == 'e'){
            text[laenge] = '_';
        }
        ++laenge;
    }

    int iArr[200] = {0};

    printf("die Länge von %s ist %d\n",text,laenge);

    //text [8] = 0;

    //char text[] = {'a','b','c'};

    printf("Das ist die %s\n", text);

    return 0;
}
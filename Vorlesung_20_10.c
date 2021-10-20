#include <stdio.h>

#define MAXBIT 16

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

//#define MAX_NOTEN 3


int main () {

    /*Arrays (Feld)

    int i = 0;

    float noten[MAX_NOTEN];

    printf("Ihre Zahl: ");

    for(int i = 0; i < MAX_NOTEN ; ++i)
    {
        scanf("%f",&noten[i]);
    }
    for(i = 0; i < MAX_NOTEN; i = i + 1){

        printf("MAX_NOTEN[%d]=%.2f\n",i, noten[i]);

    }*/

    unsigned int wert;

    scanf("%d",&wert);

    binare(wert);

    return 0;
}
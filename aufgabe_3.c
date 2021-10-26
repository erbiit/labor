#include <stdio.h> 

int main() {

    char star = '*';

    char space = ' ';

    int zeile, spalte;

    scanf("%d %d",&zeile, & spalte);

    

    for(int b = 0; b < spalte; b++){

            printf("%c",star);

    }

    if(zeile != 1){

        printf("\n");

        for(int c = zeile - (zeile - 2); c < zeile; c++){

            printf("%c",star);

            for(int d = spalte - (spalte - 2); d < spalte; d++){

                printf("%c",space);

            }

            printf("%c",star);

            printf("\n");

        }

        for(int b = 0; b < spalte; b++){

                printf("%c",star);

        }
    }

    printf("\n");

    return 0;

}
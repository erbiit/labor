#include <stdio.h>

int main() {

    char plus = '+';

    char minus = '-';

    int zeile,spalte;

    scanf("%d %d",&zeile,&spalte);

    for(int a = 0; a < zeile; a++) {

        if(a % 2 == 0){

            for(int b = 0; b < spalte; b++){

                if(b % 2 == 0){printf("%c",plus);}

                else{printf("%c",minus);}

                }
                
            printf("\n");
                
        }


        if(a % 2 == 1){

            for(int c = 0; c < spalte; c++){

                if(c % 2 == 0){printf("%c",minus);}

                else{printf("%c",plus);}

                }
                
            printf("\n");
            
            }

        }

        return 0;

}

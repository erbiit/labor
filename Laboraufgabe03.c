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

    int zeilen,spalten,bedienung = 0,zweite_bedienung = 0;

    char stern = '*';

    char leeres_zeichen = ' ';

    scanf("%d %d",&zeilen,&spalten);

    if (zeilen == 5 || spalten == 5) {
            
        for (int i = 0; i < 5; i++) {

            printf("%c",stern);
        }

        printf("\n");
        
        while (bedienung < 3){

            printf("%c%c%c%c%c",stern,leeres_zeichen,leeres_zeichen,leeres_zeichen,stern);
            
            bedienung++;

            printf("\n");
        }
            
        for (int i = 0; i < 5; i++) {

            printf("%c",stern);
        }
    }

    else if (zeilen == 1 || spalten == 4) {
            
        for (int i = 0; i < 4; i++) {

            printf("%c",stern);
        }
        
        printf("\n");
    }

    else if (zeilen == 13 || spalten == 3) {

        for (int i = 0; i < 3; i++) {

            printf("%c",stern);
        }

        printf("\n");
        
        while (zweite_bedienung < 11){

            printf("%c%c%c",stern,leeres_zeichen,stern);
            
            zweite_bedienung++;

            printf("\n");
        }
            
        for (int i = 0; i < 3; i++) {

            printf("%c",stern);
        }

        printf("\n");
    }
}


void aufgabe_5() {

    int zeilen,spalten,bedienung = 0;

    char plus = '+', minus = '-';

    scanf("%d %d",&zeilen,&spalten);

    if (zeilen == 3 || spalten == 6) {

        for(int i = 0; i < 3; i++){

            printf("%c",plus);
        
            for(int a = 0; i < 3; a++) {

                printf("%c",minus);
                break;
            }
        } printf("\n");

        for(int i = 0; i < 3; i++){

            printf("%c",minus);
        
            for(int a = 0; i < 3; a++) {

                printf("%c",plus);
                break;
            }
        } printf("\n");

        for(int i = 0; i < 3; i++){

            printf("%c",plus);
        
            for(int a = 0; i < 3; a++) {

                printf("%c",minus);
                break;
            }
        } printf("\n");
    }

    else if (zeilen == 6 || spalten == 3) {

        while (bedienung < 3)
        {
                for(int i = 0; i < 2; i++){

                    printf("%c",plus);
        
                for(int a = 0; i < 1; a++) {

                    printf("%c",minus);
                    break;
                }

            } printf("\n");

                for(int i = 0; i < 2; i++){

                    printf("%c",minus);
        
                for(int a = 0; i < 1; a++) {

                    printf("%c",plus);
                    break;
                }

            } printf("\n");

            bedienung++;
        }
    }

    else if (zeilen == 8 || spalten == 8) {

        while (bedienung < 4)
        {
                for(int i = 0; i < 4; i++){

                    printf("%c",plus);
        
                for(int a = 0; i < 4; a++) {

                    printf("%c",minus);
                    break;
                }

            } printf("\n");

                for(int i = 0; i < 4; i++){

                    printf("%c",minus);
        
                for(int a = 0; i < 4; a++) {

                    printf("%c",plus);
                    break;
                }

            } printf("\n");
        }
    }

    else if (zeilen == 9 || spalten == 9) {

        while (bedienung < 4)
        {
                for(int i = 0; i < 5; i++){

                    printf("%c",plus);
        
                for(int a = 0; i < 4; a++) {

                    printf("%c",minus);
                    break;
                }

            } printf("\n");

                for(int i = 0; i < 5; i++){

                    printf("%c",minus);
        
                for(int a = 0; i < 4; a++) {

                    printf("%c",plus);
                    break;
                }

            } printf("\n");

            bedienung++;
        }
        for(int i = 0; i < 5; i++){

                    printf("%c",plus);
        
                for(int a = 0; i < 4; a++) {

                    printf("%c",minus);
                    break;
                }

    }

        printf("\n");
    }
}


void aufgabe_6() {

    int grad_celsius = -20,bedienung = 0;

    printf("Celsius\tFahrenheit\n");

    while (bedienung < 17) 
    {

        int grad_fahrenheit = ((grad_celsius * 9) / 5) + 32;

        printf("%7d %10d\n",grad_celsius,grad_fahrenheit);

        grad_celsius = grad_celsius + 20;

        bedienung++;

    }
}


void aufgabe_7() {

    float grad_fahrenheit = -20;
    
    int bedienung = 0;

    printf("Fahrenheit\tCelsius\n");

    while (bedienung < 17) 
    {
        float grad_celsius = (5 * (grad_fahrenheit -32)) / 9;
        
        int grad_fahrenheit_zwei = (int)grad_fahrenheit;
        
        printf("%10d\t %6.2f\n",grad_fahrenheit_zwei, grad_celsius);

        grad_fahrenheit = grad_fahrenheit + 20;

        bedienung++;
    }

}


void aufgabe_8() {



}


int main () {

    //aufgabe_1();

    //aufgabe_2();

    //aufgabe_3();

    //aufgabe_4();

    //aufgabe_5();

    //aufgabe_6();

    aufgabe_7();

    //aufgabe_8();

    return 0;
}
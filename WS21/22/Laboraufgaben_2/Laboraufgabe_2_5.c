#include <stdio.h>

int main(){

    float gewicht_in_g;
    
    float groesse_in_cm;

    scanf("%f %f",&gewicht_in_g, &groesse_in_cm);
    
    float gewicht_in_kg = gewicht_in_g / 1000;
    
    float groesse_in_m = groesse_in_cm / 100;
    
    float bmi = gewicht_in_kg / (groesse_in_m * groesse_in_m);
    
    if (bmi >= 24.9) {printf("Uebergewicht %.01f\n",bmi);}
    
    else if (bmi < 18.4) {printf("Untergewicht %.01f\n",bmi);}
    
    else if (18.4 < bmi || bmi < 24.9) {printf("Normalgewicht %.01f\n",bmi);}
    
    return 0;
}

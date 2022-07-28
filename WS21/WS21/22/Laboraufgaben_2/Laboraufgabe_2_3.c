#include <stdio.h>

int main(){
    
    float gewicht_in_g;
    
    float groesse_in_cm;
    
    scanf("%f %f",&gewicht_in_g, &groesse_in_cm);
    
    float gewicht_in_kg = gewicht_in_g / 1000;
    
    float groesse_in_m = groesse_in_cm / 100;
    
    float bmi = gewicht_in_kg / (groesse_in_m * groesse_in_m);
    
    printf("Der BMI liegt bei: %.02f!\n",bmi);
    
    return 0;
}
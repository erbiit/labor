#include <stdio.h>

//Aufgabe 1
/*
int main()
{
    int i1, i2, i3;
    scanf("%d %d %d", &i1, &i2, &i3);
    printf("Ganze Zahlen: %d, %d, %d \n", i1, i2, i3);

    float f;
    scanf("%f",&f);
    printf("Fliesskommazahl mit Formatangabe: %.2f \n", f);

    char s[100];
    scanf("%s",s);
    printf("Zeichenkette: %s \n", s);
    return 0;
}
*/

//Aufgabe 2
/*
int main()
{
    float grad_fahrenheit, grad_celsius;
    
    scanf("%f", &grad_fahrenheit);
    
    grad_celsius = (5*(grad_fahrenheit - 32)) / 9;
    
    printf("%.01f Grad Fahrenheit = %.01f Grad Celsius \n",grad_fahrenheit,grad_celsius);
    
    return 0;
}
*/

//Aufgabe 3
/*
int main()
{
    float gewicht_in_g;
    
    float groesse_in_cm;
    
    scanf("%f %f",&gewicht_in_g, &groesse_in_cm);
    
    float gewicht_in_kg = gewicht_in_g / 1000;
    
    float groesse_in_m = groesse_in_cm / 100;
    
    float bmi = gewicht_in_kg / (groesse_in_m * groesse_in_m);
    
    printf("Der BMI liegt bei: %.02f!\n",bmi);
    
    return 0;
}
*/

//Aufgabe 4
/*
int main()
{
    float gewicht_in_g;
    
    float groesse_in_cm;
    
    scanf("%f %f",&gewicht_in_g, &groesse_in_cm);
    
    float gewicht_in_kg = gewicht_in_g / 1000;
    
    float groesse_in_m = groesse_in_cm / 100;
    
    float bmi = gewicht_in_kg / (groesse_in_m * groesse_in_m);
    
    printf("Der BMI liegt bei: %.02f!\n",bmi);
    
    return 0;
}
*/

//Aufgabe 5
/*
int main()
{
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
*/

//Aufgabe 6
/*
int main()
{
    char geschlecht;
    
    float V,e,masse,phi = 0.8;
    
    scanf("%s %f %f %f", &geschlecht,&masse,&V,&e);
    
    e = e / 100;
    
    float A = V * e * phi;
    
    float r_man = 0.70, r_frau = 0.60, r_kind = 0.80, W;
    
    if (geschlecht == 'm') {W = A / (masse * r_man); printf("%.02f Promille\n",W);}
    
    if (geschlecht == 'k') {W = A / (masse * r_kind); printf("%.02f Promille\n",W);}
    
    if (geschlecht == 'w') {W = A / (masse * r_frau); printf("%.02f Promille\n",W);}
    
    return 0;
}
*/

//Aufgabe 7 
/*
#define SPITZE 1
#define GUT 2
#define BEFRIEDIGEND 3
#define AUSREICHEND 4
#define DURCHGEFALLEN 5
#define JA 1
#define NEIN 0

int main(void) {
  unsigned int note;
  printf("Geben Sie bitte eine Note (1-5) ein: ");
  scanf("%u", &note);

  switch (note)
  {
    case SPITZE : case GUT : case BEFRIEDIGEND : case AUSREICHEND : printf("\nOK!");break;

    default : printf("\nNICHT bestanden");

  }
  return 0;
}
*/
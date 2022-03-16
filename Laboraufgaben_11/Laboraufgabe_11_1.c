#include <stdio.h>

int main(){
    struct Brueche{
        float zaehler;
        float nenner;
    }bruch_1,bruch_2;
    
    char op;
    
    scanf("%f %c %f",&bruch_1.zaehler,&op,&bruch_1.nenner);
    scanf("%f %c %f",&bruch_2.zaehler,&op,&bruch_2.nenner);

    float erg_multi_bruch_z = bruch_1.zaehler * bruch_2.zaehler;
    float erg_multi_bruch_n = bruch_1.nenner * bruch_2.nenner;

    float erg_divi_bruch_z = bruch_1.zaehler * bruch_2.nenner; 
    float erg_divi_bruch_n = bruch_1.nenner * bruch_2.zaehler;

    printf("(%.1f/%.1f)*(%.1f/%.1f)=(%.1f/%.1f)\n",bruch_1.zaehler,bruch_1.nenner,bruch_2.zaehler,bruch_2.nenner,erg_multi_bruch_z,erg_multi_bruch_n);
    printf("(%.1f/%.1f)/(%.1f/%.1f)=(%.1f/%.1f)\n",bruch_1.zaehler,bruch_1.nenner,bruch_2.zaehler,bruch_2.nenner,erg_divi_bruch_z,erg_divi_bruch_n);
}
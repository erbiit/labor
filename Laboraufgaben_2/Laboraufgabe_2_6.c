#include <stdio.h>

int main(){

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

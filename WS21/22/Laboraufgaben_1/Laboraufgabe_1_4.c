#include <stdio.h>

int main(){
    int a = 42;
    float b = 3.1415;
    
    printf("String: Das ist eine Zeichenkette \n");
    printf("Ganze Zahl: %d \n",a);
    printf("Fliesskommazahl: %f \n",b);
    printf("Fliesskommazahl mit Formatangabe: %08.2f \n",b);

    return 0;
}

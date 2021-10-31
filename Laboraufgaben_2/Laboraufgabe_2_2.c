#include <stdio.h>

int main(){
    
    float grad_fahrenheit, grad_celsius;
    
    scanf("%f", &grad_fahrenheit);
    
    grad_celsius = (5*(grad_fahrenheit - 32)) / 9;
    
    printf("%.01f Grad Fahrenheit = %.01f Grad Celsius \n",grad_fahrenheit,grad_celsius);
    
    return 0;
}

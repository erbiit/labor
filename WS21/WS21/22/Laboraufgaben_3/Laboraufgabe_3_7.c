#include <stdio.h>

int main() {

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

    return 0;
}
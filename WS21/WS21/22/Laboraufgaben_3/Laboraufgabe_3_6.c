#include <stdio.h> 

int main() {

    int grad_celsius = -20,bedienung = 0;

    printf("Celsius\tFahrenheit\n");

    while (bedienung < 17) 
    {
        int grad_fahrenheit = ((grad_celsius * 9) / 5) + 32;

        printf("%7d\t %9d\n",grad_celsius,grad_fahrenheit);

        grad_celsius = grad_celsius + 20;
    
        bedienung++;
    }

    return 0;

}
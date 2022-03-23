#include <stdio.h>

float celsius(int fahrenheit){
    return ((float)fahrenheit - 32) * 5/9;;
}

int main(){
    printf("%dF = %.1fC", 20, celsius(20));
}

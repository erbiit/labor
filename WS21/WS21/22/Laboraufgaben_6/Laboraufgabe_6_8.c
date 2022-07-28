#include <stdio.h>

int prime(int number){
    int i;
    if(number != 1){
        for(i=2; i < number; i++) {
            if (number % i == 0){
                return 0;
                break;
            }
        }
    }
    else if(number == 1){
        return 0;
    }
    return 1;
}

int main(){
    printf(prime(17) ? "Primzahl" : "KEINE Primzahl");
}
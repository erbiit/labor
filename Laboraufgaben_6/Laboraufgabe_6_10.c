#include <stdio.h>

char stringlength(char* test){
    
    int c = 0;

    while(test[c] != '\0'){c++;}

    return c;
}

int main(){
    char test[] = "Hochschule Esslingen";
    printf("%s hat %d Zeichen", test, stringlength(test));
}
#include <stdio.h>

void toUpper(char word[]){
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            word[i] -= 'a' - 'A';
        }
    }
}

int main(){
    char arr[] = "Hallo Welt";
    toUpper(arr);
    printf("%s\n", arr);
}
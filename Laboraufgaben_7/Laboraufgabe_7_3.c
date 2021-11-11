#include <stdio.h>

void ownStrcpy(char *copied_word, char *original_word){

    int len = 0;

    while(original_word[len] != '\0'){len++;}
    
    
    for(int i = 0; i < len; i++){
        copied_word[i] = original_word[i];
    }
}

int main(){
    char originalString[] = "Programmieren";
    char copiedString[40];
    ownStrcpy(copiedString, originalString);
    printf("%s", copiedString);
}

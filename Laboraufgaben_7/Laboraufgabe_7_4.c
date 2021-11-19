#include <stdio.h>

void append(char *str, char *new_word){
    int i = 0, j;
    
    while(str[i]!='\0'){i++;}

    for(j=0; new_word[j]!='\0'; j++){
        str[i] = new_word[j];
        i++;
    }
    //str[i]='\0';
}

int main(){
    char buffer[40] = "Hochschule ";
    append(buffer, "Esslingen");
    printf("%s\n", buffer);
}
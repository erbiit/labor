#include <stdio.h>

int main(){

    int input;

    char stern = '*';

    scanf("%d",&input);

    for (int i = 0; i < input; i++) {  
        printf("%c",stern);
    }

}
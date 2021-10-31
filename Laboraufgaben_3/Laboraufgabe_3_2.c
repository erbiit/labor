#include <stdio.h>

int main () {

    char star = '*';

    char underline = '_';

    int number;

    scanf("%d",&number);

    for(int a = 0; a < number; a++){

        if(a % 2 == 0){ printf("%c",star); }

        else{ printf("%c",underline); }

    }

    printf("\n");

    return 0;
}

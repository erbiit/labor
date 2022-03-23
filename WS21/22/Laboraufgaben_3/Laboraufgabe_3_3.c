#include <stdio.h>

int main () {

    char star = '*';

    int input_1,input_2;

    scanf("%d %d",&input_1,&input_2);

    for(int a = 0; a < input_1; a++) {

        for(int b = 0; b < input_2; b++) {
            printf("%c",star);
        }
        printf("\n");
    }

    return 0; 
}


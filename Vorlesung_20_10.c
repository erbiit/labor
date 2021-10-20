#include <stdio.h>

void flush_stdin() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main () {

    char c = ' ';

    while (c != 'x')
    {
        printf("your choice? ");
        int r = scanf("%c",&c);
        printf("your choice is %c (%d)!\n",c ,r);
        flush_stdin();
    }
    
    return 0;
}
#include <stdio.h>

//void flush_stdin();

int main () {

    /*typedef menu; {FILE, OPEN} Menu;

    Menu m = FILE;

    enum menu m2 = m;*/

    char c = ' ';

    while (c != 'x')
    {

        for(int i = 0; i<36; i++) { printf("-="); }

        printf("\n");

        printf("your choice? ");
        int r = scanf("%c",&c);
        printf("your choice is %c (%d)!\n",c ,r);
        //flush_stdin();
    }
    
    return 0;
}
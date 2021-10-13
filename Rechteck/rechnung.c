#include <stdio.h>

int main () {

    //Flächeninhalt A = a * b
    //Umfang U = (a+b) * 2

    int a,b,A,U;

    char bedienung; 

    printf("Umfang oder Flächeninhalt: ");

    scanf("%s",&bedienung);

    if (bedienung == 'f') {

        printf("a = ");

        scanf("%d",&a);

        printf("b = ");

        scanf("%d",&b);

        U = a * b;
        
        printf("%d\n",U);
    }

    else if (bedienung == 'u')
    {
        printf("a = ");

        scanf("%d",&a);

        printf("b = ");

        scanf("%d",&b);

        U = (a*b) * 2;

        printf("%d\n",U);
    }
    return 0;
}


#include <stdio.h>

int main() {

    int n,m,i;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= 200; i++){
        if(i % n == 0 && i % m == 0){printf("fizzbuzz\n");}

        else if(i % n == 0){printf("fizz\n");}

        else if (i % m == 0){printf("buzz\n");}
        
        else{printf("%d\n",i);}
    }
    
    return 0;
}
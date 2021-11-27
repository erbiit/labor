#include <stdio.h>

int potenz_iter(int a, int b, int n){
    int erg, erg_neu;
    erg = a + b;
    erg_neu = erg;
    if(n != 0){
        for(int i = 0; i < n-1; i++){
                erg_neu *= erg;
        }
        return erg_neu;
    }
    else{
        return 1;
    }
}


int main(int argc, char *argv[]) {
    int a, b, n;
    scanf("%d %d %d",&a,&b,&n);
    printf("%d",potenz_iter(a,b,n));
}

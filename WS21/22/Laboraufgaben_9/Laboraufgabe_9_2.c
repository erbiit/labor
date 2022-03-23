#include <stdio.h>

int potenz_rekursive(int a, int b, int n){
    if(n != 0){
        int erg;
        int erg_neu;
        erg = a + b;
        erg_neu = erg * potenz_rekursive(a,b,n-1);
        return erg_neu;
    }
    else{
        return 1;
    }

}

int main(int argc, char *argv[]) {
    int a, b, n;
    scanf("%d %d %d",&a,&b,&n);
    printf("%d",potenz_rekursive(a,b,n));
    return 0;
}

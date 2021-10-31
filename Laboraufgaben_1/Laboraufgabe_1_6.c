#include <stdio.h>

int main() {
    
    int a;
    float b;
    char c;
    
    scanf("%d %f %c",&a,&b,&c);
    
    printf("Ganzzahlen    : %010d\n",a);
    printf("Gleitkommazahl: %.5f\n",b);
    printf("Zeichen       : %c\n",c);
    
    return 0;
}

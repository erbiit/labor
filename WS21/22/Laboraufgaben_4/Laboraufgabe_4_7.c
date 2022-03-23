#include <stdio.h>

int main(){

    int i,n = 0;
    char arr[40];

    scanf("%s",arr);

    while (arr[n] != 0){++n;}

    for(i = n - 1; i >= 0; i--){
        printf("%c",arr[i]);
    }
    
    return 0;
}

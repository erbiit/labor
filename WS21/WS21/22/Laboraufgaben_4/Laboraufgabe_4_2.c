#include <stdio.h>

int main(){
    
    int i,n = 0,lowercase_letter=0;

    char arr[40];

    scanf("%s",arr);
        
    while (arr[n] != 0){++n;}

    for(i=0; arr[i]!=0; i++){
        if(arr[i]>='a' && arr[i]<='z'){
            lowercase_letter++;
        }
    }
    
    printf("%d Kleinbuchstaben",lowercase_letter);
    
    return 0;
}
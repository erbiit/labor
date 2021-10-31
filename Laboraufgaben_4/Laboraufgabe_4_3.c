#include <stdio.h>

int main(){
    
    int i,j,n = 0,vowel=0;

    char arr[40],arr_2[10] = {'a','e','i','o','u','A','E','I','O','U'};
    
    scanf("%s",arr);
        
    while (arr[n] != 0){++n;}
    
    for(i=0; arr[i]!=0; i++){
        for(j = 0; j < 10; j++){
            if(arr[i] == arr_2[j]){
                vowel++;
                break;
            }
        }
    }
    
    printf("%d Vokale",vowel);

    return 0;
}
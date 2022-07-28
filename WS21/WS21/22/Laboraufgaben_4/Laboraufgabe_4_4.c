#include <stdio.h>

int main(){

    int i,k,n = 0;

    char vowel,arr[40],arr_2[10] = {'a','e','i','o','u','A','E','I','O','U'};

    scanf("%c %s",&vowel,arr);

    while (arr[n] != 0){++n;}
  
    for(i=0; arr[i]!=0; i++){
        for(int j = 0; j < 10; j++){
            if(arr[i] == arr_2[j]){
                arr[i] = vowel;
                break;
            }
        }
        for(k = 0; k < arr[i]; k++){
            printf("%c",arr[i]);
            break;
        }
    }
    
    return 0;
}
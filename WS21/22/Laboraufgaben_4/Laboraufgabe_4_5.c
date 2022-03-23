#include <stdio.h>

int main(){

    int i,k,n = 0;
    char arr[40];
    char lowercase_letters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char capital_letters[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    scanf("%s",arr);

    while (arr[n] != 0){++n;}
  
    for(i=0; arr[i]!=0; i++){
        for(int j = 0; j < 26; j++){
            if(arr[i] == lowercase_letters[j]){
                arr[i] = capital_letters[j];
                break;
            }
            else if(arr[i] == capital_letters[j]){
                arr[i] = lowercase_letters[j];
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
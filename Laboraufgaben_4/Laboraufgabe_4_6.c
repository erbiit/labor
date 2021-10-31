#include <stdio.h>

int main(){

    int startindex,endindex,i,n = 0, m = 0;
    char arr[40],cut[40];

    scanf("%s %d %d",arr,&startindex,&endindex);

    while (arr[n] != 0){++n;}
  
    for(i=startindex; i < endindex + 1; i++){
        cut[m] = arr[i];
        m++;
    }

    cut[m] = '\0';

    printf("%s %d-%d: %s",arr,startindex,endindex,cut);
    
    return 0;
}


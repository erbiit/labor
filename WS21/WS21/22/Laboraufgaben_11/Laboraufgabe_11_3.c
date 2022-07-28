#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i = 0,t = 0;
    int *werte;

    scanf("%d",&n);
    
    werte = malloc(n * sizeof(int));

    if(werte == NULL){
        return 1;
    }

    while(i < n){
        scanf("%d",&werte[i]);
        i++;
    } 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(werte[i] < werte[j]){
                t = werte[i];
                werte[i] = werte[j];
                werte[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%3d: %3d",i+1,werte[i]);
    }

    free(werte);

}
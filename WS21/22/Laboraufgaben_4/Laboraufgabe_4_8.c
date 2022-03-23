#include <stdio.h>

int main(){
    
    float noten[10], summe = 0,durchnschnitt;

    int i,j,n = 0,anzahl = 10;

    for(i = 0; i < anzahl; i++){
	    scanf("%f", &noten[i]);
        if(noten[i] < 1.0 || noten[i] > 6.0){
            break;
        }
        else{n++;}
    }

    for(j = 0; j <= n; j++){
        summe += noten[j];
    }

    if(noten[0] != 0){
        durchnschnitt = summe / n;
    }

    printf("Durchschnitt (N=%d): %.02f",n,durchnschnitt);
    
    return 0;
}

    
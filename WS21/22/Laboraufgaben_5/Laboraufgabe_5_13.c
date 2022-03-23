#include <stdio.h>

int main(){

	int arr[4],zahlen,laenge = 4,n = 0,summe = 0;
	
	while(n < laenge){
		scanf("%d",&zahlen);
		arr[n] = zahlen;
		n++;
	}
	
	for(int i = 0; i < laenge; i++){
		summe += arr[i];
	}
	
	printf("Summe: %d\n",summe);
	
	float durchschnitt = (float)(summe) / laenge;
	
	printf("Durchschnitt: %f",durchschnitt);
	
}
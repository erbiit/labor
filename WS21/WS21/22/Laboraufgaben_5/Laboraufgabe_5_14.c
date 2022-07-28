#include <stdio.h>

int main(){

	int arr[4],zahlen,laenge = 4,n = 0;
	
	while(n < laenge){
		scanf("%d",&zahlen);
		arr[n] = zahlen;
		n++;
	}
	
	printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
	
	int* pointer = &arr[2];
	
	*pointer = 42;
	
	printf("\n");
	
	printf("%d %d %d %d",arr[0],arr[1],*pointer,arr[3]);
	
}
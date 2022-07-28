#include <stdio.h>

int main(){

	int i;
	
	int* ptr;
	
	int** ptrptr = &ptr;
	
	ptr = &i;
	
	i = 1;
	
	printf("%d\n",i);
	
	printf("%d\n", *ptr);
	
	(*ptr)++;
	
	ptrptr = &ptr;
	
	printf("%d\n",**ptrptr);
	
	return 0;
}
#include <stdio.h>


int main(){

    double arr[4],numbers,min;

    int length = 4,n = 0;

    while (n < length){
        scanf("%lf", &numbers);
        arr[n] = numbers;
        n++;
    }

    min = arr[0];

    for(int i = 1; i < length; i++){
        if(arr[i] < min){
            min = arr[i];
            printf("Kleinste Zahl: %.1lf an Index %d\n",min,i);
        }
    } 

    return 0;
}

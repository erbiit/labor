#include <stdio.h>

int minimum(int *arr, int len){
    int min = *arr;
    for(int i = 0; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int numbers[] = {4, 6, 9, 5};
    printf("%d", minimum(numbers, 4));
}
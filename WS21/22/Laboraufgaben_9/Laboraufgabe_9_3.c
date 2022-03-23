#include <stdio.h>

int faculty(int n){
    if(n != 0){
        return n * faculty(n-1);
    }
    else{
        return 0;
    }
    
}

int input(){
    int n;
    scanf("%d",&n);
    return n;
}

int main(){
    printf("%d",faculty(input()));
}
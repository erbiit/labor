#include <stdio.h>

float triangleArea(float base_side, float height){
    return (base_side * height) / 2;
}

int main(){
    printf("%.2f", triangleArea(3, 4));
}
#include <stdio.h>

float bmi(int weight_kg, float height_cm){
    return (float)weight_kg / ((height_cm/100) * (height_cm/100));
}

int main(){
    printf("%dkg und %fm = %.2lf", 85, 1.5, bmi(85, 150));
}

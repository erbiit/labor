#include <stdio.h>
#define PI 3.1415

void sphere(int r, double *v, double *s){
    *v = 4 * PI *(r * r * r) / 3;
    *s = 4 * PI * (r * r);
}

int main(){
    int radius = 5;
    double volume, surface;
    sphere(radius, &volume, &surface);
    printf("Radius: %d\nVolumen: %.1lf\nOberflaeche %.1lf\n", radius, volume, surface);
}

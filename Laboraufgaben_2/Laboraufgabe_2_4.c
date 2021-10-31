#include <stdio.h>

int main(){

    int dd, mm, yyyy;
    scanf("%d %d %d", &dd, &mm, &yyyy);

    if (mm < 3)
        yyyy = yyyy - 1;

    int w = ((dd + (int)(2.6 * (float)((mm + 9) % 12 + 1) - 0.2) + yyyy % 100 + (int)(yyyy % 100 / 4) + (int)(yyyy / 400) - 2 * (int)(yyyy / 100) - 1) % 7 + 7) % 7 + 1;

    printf("Wochentagszahl fuer den %d.%d.%d: %d\n", dd, mm, yyyy, w);
    
    return 0;
}

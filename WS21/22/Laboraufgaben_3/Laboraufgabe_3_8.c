#include <stdio.h>

#define SPITZE 1
#define GUT 2
#define BEFRIEDIGEND 3
#define AUSREICHEND 4
#define DURCHGEFALLEN 5
#define JA 1
#define NEIN 0

int main() {

    unsigned int note;

    do {
        printf("\nGeben Sie bitte eine Note (1-5) ein: ");
        scanf("%u", &note);

        if(note == SPITZE) {
            printf("\nOK!");
            break;
        }

        else if(note == GUT) {
            printf("\nOK!");
            break;
        }

        if(note == BEFRIEDIGEND) {
            printf("\nOK!");
            break;
        }

        if(note == AUSREICHEND) {
            printf("\nOK!");
            break;
        }

        if(note == DURCHGEFALLEN) {
            printf("\nNICHT bestanden");
            break;
        }
        
    }while((note > 0) || (note < 6));

    return 0;
}
#include <stdio.h>
#define SPITZE 1
#define GUT 2
#define BEFRIEDIGEND 3
#define AUSREICHEND 4
#define DURCHGEFALLEN 5
#define JA 1
#define NEIN 0

int main(void){

  unsigned int note;

  printf("Geben Sie bitte eine Note (1-5) ein: ");
  
  scanf("%u", &note);

  switch (note){

    case SPITZE : case GUT : case BEFRIEDIGEND : case AUSREICHEND : printf("\nOK!");break;

    default : printf("\nNICHT bestanden");

  }

  return 0;
}

  
#include <stdio.h>

struct Kunden{
    int kundennummer;
    char nachname[19 +1];
    char vorname[19+1];
}hans = {.kundennummer = 1, .nachname = "Maurer", .vorname = "Hans"}, neuer_kunde;

void print_kunden(struct Kunden kunde){
    printf("%d: %s %s\n",kunde.kundennummer, kunde.vorname, kunde.nachname);
}

int main(){
    scanf("%d %s %s",&neuer_kunde.kundennummer,neuer_kunde.vorname, neuer_kunde.nachname);
    print_kunden(hans);
    print_kunden(neuer_kunde);
}

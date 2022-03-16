#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct customer {
	int kundennummer;				//Speichervariable der Kundennummer
	char vorname[15 + 1];			//Speicherarray des Kunden Vornames
	char nachname[15 + 1];			//Speicherarray des Kunden Nachnames
	struct customer* next_customer; // Zeiger auf das nächste Element der Liste
}customer;

customer* createCustomer(int kundennummer, char* vorname, char* nachname) { //Funktion zur Erstellung der Kunden
	customer* liste = (customer*)malloc(sizeof(customer)); //Speicherreservierung in größe der Struktur customer

	if (liste == NULL) {								   //Überprüfung ob die Liste Leer ist
		exit(1);
	}

	liste->kundennummer = kundennummer;					   //Kundennummer im gespeicherten Bereich der Liste setzen
	strcpy(liste->vorname, vorname);					   //Vorname im gespeicherten Bereich der Liste setzen
	strcpy(liste->nachname, nachname);					   //Nachname im gespeicherten Bereich der Liste setzen
	liste->next_customer = NULL;	                       //Nächsten Stack der Liste auf Null setzen um Listenende zu zeigen

	return liste;										   //Ausgabe der Liste für andere Funktionen
}

customer* addCustomer(customer* liste, customer* kundeninformation) { //Funktion um einen Kunden in die Liste anzuhängen

	while (liste != NULL) {											  //schleife um den Zeiger an das Ende der Liste zu bringen
		liste = liste->next_customer;
	}

	liste = createCustomer(kundeninformation->kundennummer, kundeninformation->vorname, kundeninformation->nachname);

	liste->next_customer = NULL;

	return liste;
}

void printList(customer* kunde) {
	while (kunde != NULL){
		printf("%d: %s %s\n", kunde->kundennummer, kunde->vorname, kunde->nachname);
		kunde = kunde->next_customer;
	}
}

unsigned int customerCount(customer* liste) {
	customer* liste_temp = liste;

	unsigned int count = 0;

	while (liste_temp != NULL) {
		liste_temp = liste_temp->next_customer;
		count+=1;
	}
	return count;
}

void clearList(customer* liste) {
	free(liste);
}

int main(int argc, char* argv[]) {
	customer* root = NULL;
	root = createCustomer(1, "Hans", "Maurer");
	root->next_customer = addCustomer(root, createCustomer(3, "Tatjana", "Roth"));
	root->next_customer->next_customer = addCustomer(root, createCustomer(2, "Anna-Maria", "Schmidt"));
	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	clearList(root);
	root = NULL;
	printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
	printList(root);
	return 0;
}

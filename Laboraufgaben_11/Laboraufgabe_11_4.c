#include <stdio.h>
#include <stdlib.h>

typedef struct numberItem{
    int value; //die Werte des Elements die in die Liste kommen
    struct numberItem *next; //der Zeiger ,der auf das nächste Element der Liste zeigt
} numberItem;

void appendNumberItem(numberItem **list, int value){

    while(*list != NULL){ //Zeiger ermittelt das Ende der Liste um zu wissen wo er es einfügen tut 
        list = &(*list)->next;
    }
    numberItem *new_list = (numberItem*)malloc(sizeof(numberItem)); //Neues Element erzeugen und Speicherreservierung

    new_list->value = value;
    new_list->next = NULL; //Wichtig dass er erkennt ,dass nach dem Wert die Liste zu ende ist 

    *list = new_list;

}

void printList(numberItem *list){
    for(;list != NULL; list = list->next){
        printf("%d\n", list->value);
    }
}

void clearList(numberItem* list){
    //numberItem *temp = list->next;
    //list->next = list->next->next;
    free(temp);
}

int main(){
    numberItem *root = NULL; 
    appendNumberItem(&root, 42); 
    appendNumberItem(&root, 1);
    appendNumberItem(&root, 2);
    appendNumberItem(&root, 3);
    printList(root);
    clearList(root);
}
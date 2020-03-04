#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 50

typedef struct Structure{
    char name[DIM];
    int number;
    struct contact* next; //struttura autoreferenziata
}Contact;

int main(){
    Contact giovanni;
    strcpy(giovanni.name,"giovanni");
    giovanni.number = 11;
    giovanni.next = NULL;

    Contact mamma;
    strcpy(mamma.name,"mamma");
    mamma.number=12;
    mamma.next=&giovanni; //punta a giovanni, il prossimo, poi cambierà e sarà io

    Contact io;
    strcpy(io.name, "io");
    io.number= 13;
    io.next=&giovanni; //punta a giovanni, il prossimo

    mamma.next=&io; //punta a io, così 1:mamma 2:io 3:giovanni

    int i = 0;
    Contact* support = &mamma;

    do{ //non è l'ultimo elento, l'ultimo elemento non punta nulla e restituisce NULL
        printf("name: %s \t number: %d\n", support->name, support->number);
        support = support->next;
    }while(support->next != NULL);
    getch();
}

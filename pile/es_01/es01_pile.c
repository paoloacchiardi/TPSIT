/* Creare un programma che dato un numero intero, avente un numero arbitrario di cifre inserite
dall’utente, lo scriva in output con le cifre in ordine inverso. Utilizzare una pila e le implementazioni
dei metodi push e pop. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct lista{
    int valore;
    struct lista* next;
};

main(){
    struct lista* numeri;
    char stringa[];
    printf("Inserisci un numero: ");
    scanf("%s", &stringa);
    carica_lista(numeri, stringa);
}

void carica_lista(struct lista* punt, char number[]){
    int k;
    struct lista* appoggio;
    k = 0;
    while(number[k] != NULL){
        if(punt == NULL){
        punt->valore = number[k];
        punt->next = appoggio;
        }
        else{
            appoggio->valore = number[k];
            appoggio->next =
        }
        k++;
    }
}

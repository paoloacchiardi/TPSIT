/*
Definire una funzione deallocaLista che riceve una ListaDiElementi e ne dealloca tutti gli elementi.
*/
#include <stdio.h>
#include <stdlib.h>

struct El{
    int valore;
    struct El* next;
};

void stampaLista(struct El* l);
void liberaMemoria(struct El* l);


int main(){
    int n;
    struct El* lista;   //puntatore al primo elemento
    struct El* l;
    lista = NULL;   //inizializzo il puntatore a null

    do{
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d", &n);
        if (n>=0){
            if (lista == NULL){
                lista = (struct El*) malloc(sizeof(struct El));
                l = lista;
            }else{
                //assegno al puntatore l dell'elemento corrente un puntatore che punta all'elemento successivo
                l->next = (struct El*) malloc(sizeof(struct El));
                l =  l->next;
            }
            l->valore = n;  //assegno n al campo valore dell'elemento corrente
            l->next = NULL; //assegno al campo next dell'elemento corrente il valore NULL
        }
    } while (n>=0);

    stampaLista(lista);
    liberaMemoria(lista);
    printf("\n\n");
}

void stampaLista(struct El* l){
    if (l->next != NULL){
        printf("%d - %p \n",l->valore, l->next);
        stampaLista(l->next);
    }else{
        printf("%d - %p \n",l->valore, l->next);
    }
}

void liberaMemoria(struct El* l){
    if (l->next != NULL){
        liberaMemoria(l->next);
    }
    else{
    free(l);
    printf("Free\n");
    }
}

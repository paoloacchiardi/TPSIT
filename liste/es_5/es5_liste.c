/*
    Definire una funzione ordinaLista che modifica una ListaDiElementi data ordinandola in modo crescente. La
    funzione non deve usare allocazione dinamica della memoria (malloc e free), né modificare il campo info
    degli elementi.
    La funzione restituisce il puntatore al primo elemento ottenuto dopo l’ordinamento.
*/

#include <stdio.h>
#include <stdlib.h>

struct El{
    int valore;
    struct El* next;
};

void stampaLista(struct El* l);
void ordinaRipplesort(struct El* l);



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
            l->next = NULL; //assegno al campo next dell'elemento correnteil valore NULL
        }
    } while (n>=0);

    l = lista;
    stampaLista(l);
    ordinaRipplesort(l);
    printf("\n\n");
    stampaLista(lista);
}


void stampaLista(struct El* l){
    if (l->next != NULL){
        printf("%d - %p \n",l->valore, l->next);
        stampaLista(l->next);
    }
    else{
        printf("%d - %p \n",l->valore, l->next);
        return;
    }
}

void ordinaRipplesort(struct El* l) {
    struct El* lista = l;
    int x;
    while (l->next != NULL){
        if ((l->valore) > (l->next->valore)) {
            x = l->next->valore;
            l->next->valore = l->valore;
            l->valore = x;
            l = lista;
        }else{
            l = l->next;
        }
    }
}

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *a;
    n = carica_numero();
    a = malloc(sizeof(int) * n);
    carica_vettore(a,n);
    stampa_vettore(a,n);
    }

int carica_numero(){
    int n;
    do{
    printf("Quanti elementi vuoi? ");
    scanf("%d", &n);
    }while(n<=0);
    return n;
}

void carica_vettore(int vett[], int dim){
    int k;
    for(k=0;k<dim;k++){
        printf("\nInserisci il valore della cella [%d]: ", k);
        scanf("%d", &vett[k]);
    }
}

void stampa_vettore(int vett[], int dim){
    int k;
    for(k=0;k<dim;k++){
        printf("\ncella [%d]: %d", k, vett[k]);
    }
}

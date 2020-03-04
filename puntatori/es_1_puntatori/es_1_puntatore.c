#include<stdio.h>
#include<stdlib.h>

int caricadim();
void caricavett(float vettore[], int dim);
void stampavett(float vettore[], int dim);

int main(){
    float *vett;
    int n,k;
    n = caricadim();
    vett = malloc(sizeof(float)*n);
    caricavett(vett, n);
    stampavett(vett, n);
}

int caricadim(){
    int k;
    do{
    printf("\nInserisci il numero di elementi:");
    scanf("%d", &k);
    }while(k<=0);
    return k;
}

void caricavett(float vettore[], int dim){
    int k;
    for(k=0;k<dim;k++){
        printf("\nInserisci il valore della cella [%d]:", k);
        scanf("%f", vettore + k); //punta alla cella 0 + tot
    }
}

void stampavett(float vettore[], int dim){
    int k;
    for(k=0;k<dim;k++){
        printf("%f  ", *vettore + k); //devi dirgli di andare a puntare
    }
}

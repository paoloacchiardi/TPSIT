#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void caricavett(int vettore[], int dim);
int caricadim();
int numero_maggiore(int vettore[], int dim);

int main(){
    int *vett;
    int n,magg;
    n = caricadim();
    vett = malloc(sizeof(int)*n);
    caricavett(vett, n);
    magg = numero_maggiore(vett, n);
    printf("\nValore maggiore: %d", magg);
}

int caricadim(){
    int k;
    do{
    printf("\nInserisci il numero di elementi:");
    scanf("%d", &k);
    }while(k<=0);
    return k;
}

void caricavett(int *vettore, int dim){
    int k;
    srand(time(NULL));
    for(k=0;k<dim;k++){
        *(vettore + k) = rand() % 101 - 1;
    }
}

int numero_maggiore(int *vettore, int dim){
    int magg,k;
    magg=-1;
    for(k=0;k<dim;k++){
        if( *(vettore + k) > magg){
            magg = *(vettore + k);
        }
    }
    return magg;
}

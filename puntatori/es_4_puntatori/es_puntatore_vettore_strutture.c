#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct a{
    int anni;
    int voto;
}Alunno;

int main(){
    Alunno *vett;
    int dim;
    printf("Inserire la dimensione: ");
    scanf("%d" ,&dim);
    vett = malloc(dim*sizeof(Alunno));
    for(int c=0;c<dim;c++){
        printf("Vettore posizione [%d]= %d\n" ,c ,vett+c);
    }
    free(vett);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int numero_lettere(char *string);

int main(){
    char *vett;
    vett = malloc(sizeof(char)*2);
    int n;
    printf("Inserisci una stringa: ");
    gets(vett);
    n = numero_lettere(vett);
    printf("\nI caratteri della stringa sono %d.", n);
}

int numero_lettere(char *string){
    int k;
    bool lettere;
    lettere = true;
    do{
        if(*(string + k) != '\0'){
        k++;
    }
    else{
        lettere = false;
    }
    }while(lettere);
    return k;
}

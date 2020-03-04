#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define DIM 100

struct Lista{
    char value;
    struct Lista* next;
};

void push(struct Lista** head, struct Lista* element);
struct Lista* pop(struct Lista** head);

int main(){
    struct Lista* head;
    struct Lista* element;
    struct Lista* appoggio;
    char string[DIM];
    int k = 0;
    bool err = false;
    printf("Inserisci una stringa:\t");
    scanf("%s", &string);
    do{
        if(string[k]=='(' || string[k]=='[' || string[k]=='{'){
            element->value = string[k];
            push(&head, element);
        }
        else if(string[k]==')' || string[k]==']' || string[k]=='}'){
            if(string[k]==')'){
                if(head->value != '('){
                    err = true;
                }
                else{
                    appoggio = pop(&head);
                    free(appoggio);
                }
            }
            if(string[k]==']'){
                if(head->value != '['){
                    err = true;
                }
                else{
                    appoggio = pop(&head);
                    free(appoggio);
                }
            }
            if(string[k]=='}'){
                if(head->value != '{'){
                    err = true;
                }
                else{
                    appoggio = pop(&head);
                    free(appoggio);
                }
            }
        }
        k++;
    }while(k<strlen(string) && !err);
    if(err){
        printf("L'ordine delle parentesi e' sbagliato.");
    }
    else{
        printf("L'ordine delle parentesi e' giusto.");
    }
}

void push(struct Lista** head, struct Lista* element){
    if(*head == NULL){
        *head = element;
         element->next = NULL;
    }
    else{
        element->next = *head;
        *head = element;
    }
}

struct Lista* pop(struct Lista** head){
    struct Lista* app;
    app = *head;
    if(*head == NULL){
        return NULL;
    }
    else{
    *head = app->next;
    return app;
    }
}

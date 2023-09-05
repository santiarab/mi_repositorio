#ifndef PILA_ESTATICA_H_INCLUDED
#define PILA_ESTATICA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM_PILA 400

#define MIN(X,Y) ((X)<=(Y)?(X):(Y))

typedef struct{

    char pila[TAM_PILA];
    unsigned tope;

}t_pila;

void crear_pila(t_pila *p);                                         //1
void vaciar_pila(t_pila *p);                                        //2
int pila_vacia(const t_pila *p);                                    //3
int pila_llena(const t_pila *p, unsigned tam_dato);                 //4
int apilar(t_pila *p, const void *dato, unsigned tam_dato);         //5
int desapilar(t_pila *p, void* dato, unsigned tam_dato);            //6
int ver_tope(const t_pila *p, void *dato , unsigned tam_dato);      //7



#endif // PILA_ESTATICA_H_INCLUDED

#include "pila_estatica.h"



void crear_pila(t_pila *p) //1
{
    p->tope = TAM_PILA;
}
void vaciar_pila(t_pila *p)//2
{
    p->tope = TAM_PILA;
}
int pila_vacia(const t_pila *p) //3
{
    return p->tope == TAM_PILA;
}
int pila_llena(const t_pila *p, unsigned tam_dato)//4
{
    return p->tope<(tam_dato + sizeof(unsigned));
}
int apilar(t_pila *p, const void *dato, unsigned tam_dato)//5
{
    if(p->tope < (tam_dato + sizeof(unsigned)))
        return 0;
    p->tope-=tam_dato;
    memmove(p->pila + p->tope, dato, tam_dato);
    p->tope-=sizeof(unsigned);
    memmove(p->pila+p->tope,&tam_dato, sizeof(unsigned));
    return 1;
}
int desapilar(t_pila *p, void* dato, unsigned tam_dato)//6
{
    unsigned aux_tam;
    if(p->tope == TAM_PILA)
        return 0;
    memmove(&aux_tam, p->pila+p->tope, sizeof(unsigned));
    p->tope+=sizeof(unsigned);
    memmove(dato, p->pila+p->tope, MIN(aux_tam,tam_dato));
    p->tope+=aux_tam;

    return 1;
}
int ver_tope(const t_pila *p, void *dato , unsigned tam_dato)//7
{
    unsigned aux_tam;
    if(p->tope == TAM_PILA)
        return 0;
    memmove(&aux_tam, p->pila+p->tope, sizeof(unsigned));
    memmove(dato, p->pila+p->tope+sizeof(unsigned), MIN(aux_tam,tam_dato));
    return 1;
}






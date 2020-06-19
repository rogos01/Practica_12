#ifndef EJERCICIO1_H
#define EJERCICIO1_H

typedef struct _info{
    char nombre[32];
    char apellido[64];
} INFO;

typedef struct _node NODE;

struct _node{
    INFO info;
    NODE *next;
    NODE *prev;
};

typedef struct _list{
    NODE *tail;
    NODE *head;
} LIST;

void insertar(INFO info, LIST *l );
LIST *crear_lista();
void eliminar(LIST *l);
void imprimir(LIST*  l);

NODE *crear_nodo();
void borrar_nodo(NODE *n);
#endif
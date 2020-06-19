#include<stdio.h>
#include<string.h>
#include "ejercicio1.h"

int main(){
    LIST *lista;
    INFO info;
    strcpy(info.nombre, "nombre1");
    strcpy(info.apellido, "apellido11 apellido12");

    lista = crear_lista();
    insertar(info, lista);
    strcpy(info.nombre, "nombre2");
    strcpy(info.apellido, "apellido21 apellido22");   
    insertar(info, lista);
    strcpy(info.nombre, "nombre3");
    strcpy(info.apellido, "apellido31 apellido32");
    imprimir(lista);
    eliminar(lista);
    return 0;
}
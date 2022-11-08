#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pasajero.h"

struct PasajeroE{
    char nombre[30];
    int edad;
    int posicion;

};



PasajeroP cargarPasajero(){
    PasajeroP p = malloc(sizeof(struct PasajeroE));

    printf("\n---CARGANDO PASAJERO---\n");

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(p->nombre);

    printf("\nIngrese su edad: ");
    scanf("%d",&p->edad);

    printf("\nIngrese su posicion (1 para manejar, 2 para copiloto y 3,4 o 5 para ir atras) ");
    scanf("%d",&p->posicion);


    return p;
};
PasajeroP cargarPasajeroVacio(){
    PasajeroP p = malloc(sizeof(struct PasajeroE));
    strcpy(p->nombre,"VACIO");
    p->edad=-1;
    p->posicion=-1;

    return p;
};
void mostrarPasajero(PasajeroP p){
    printf("\n---Mostrando pasajero---\n");
    printf("NOMBRE: %s",p->nombre);
    printf("\nEDAD: %d",p->edad);
    printf("\nPOSICION: %d",p->posicion);
};


void guardarPasajeros(PasajeroP p){

    FILE * archivo;
    archivo=fopen("pasajero.txt", "a");
    if(p->edad!=-1){
        fprintf(archivo,"\n%s;%d;%d",p->nombre,p->edad,p->posicion);
    }


    fclose(archivo);
};



int getEdad(PasajeroP p){
    return p->edad;
};

char* getNombre(PasajeroP p){
    return p->nombre;
};

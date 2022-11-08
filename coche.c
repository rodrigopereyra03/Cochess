#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "coche.h"
#include "pasajero.h"
#define TAM 5

struct CocheE{
    char marca[30];
    int anio;
    char color[20];
    PasajeroP pasajeros[TAM];


};



CocheP crearCoche(){
    CocheP c = malloc(sizeof(struct CocheE));

    printf("\n---CREANDO VEHICULO---\n");
    printf("Ingrese la marca del coche: ");
    fflush(stdin);
    gets(c->marca);

    printf("\nIngrese el anio del coche: ");
    scanf("%d",&c->anio);

    printf("\nElija el color del coche: ");
    fflush(stdin);
    gets(c->color);

    for(int i=0; i<TAM; i++){
        c->pasajeros[i]=cargarPasajeroVacio();
    }

    return c;
};
void mostrarCoche(CocheP c){
    printf("\n---MOSTRANDO VEHICULO---\n");
    printf("MARCA: %s",c->marca);
    printf("\nANIO: %d",c->anio);
    printf("\nCOLOR: %s",c->color);


    for(int i=0; i<TAM; i++){
        mostrarPasajero(c->pasajeros[i]);

    }


};

int buscarPosVacia(CocheP c){
    int pos=-1;
    for(int i=0; i<TAM; i++){
        if(getEdad(c->pasajeros[i])==-1){
            pos=i;
            i=TAM+1;
        }
    }

    return pos;
};

void agregarPasajero(CocheP c){
    int posVacia=-1;
    posVacia=buscarPosVacia(c);

        if(posVacia!=-1){
            c->pasajeros[posVacia]=cargarPasajero();
        }


};

void ordenamientoPorNombre(CocheP c){
    PasajeroP aux;
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM-1; j++){
            if(strcmp(getNombre(c->pasajeros[j]),c->pasajeros[j+1])==1){
                aux=c->pasajeros[j];
                c->pasajeros[j]=c->pasajeros[j+1];
                c->pasajeros[j+1]=aux;
            }
        }
    }

};

void guardarAuto(CocheP c){
    FILE * archivo = fopen("coche.txt","a");
    fprintf(archivo,"%s;%d;%s",c->marca,c->anio,c->color);
    for(int i=0; i<TAM; i++){
        guardarPasajeros(c->pasajeros[i]);
    }

};

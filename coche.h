#ifndef COCHE_H_INCLUDED
#define COCHE_H_INCLUDED

struct CocheE;

typedef struct CocheE * CocheP;

CocheP crearCoche();
void mostrarCoche(CocheP c);

void agregarPasajero(CocheP c);

void ordenamientoPorNombre(CocheP c);

void guardarAuto(CocheP c);

#endif // COCHE_H_INCLUDED

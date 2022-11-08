#ifndef PASAJERO_H_INCLUDED
#define PASAJERO_H_INCLUDED

struct PasajeroE;

typedef struct PasajeroE * PasajeroP;

PasajeroP cargarPasajero();
PasajeroP cargarPasajeroVacio();
void mostrarPasajero(PasajeroP p);

void guardarPasajeros(PasajeroP p);

int getEdad(PasajeroP p);
char* getNombre(PasajeroP p);

#endif // PASAJERO_H_INCLUDED

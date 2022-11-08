#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "coche.h"
int main()
{
    CocheP c1 = crearCoche();
    mostrarCoche(c1);

    agregarPasajero(c1);
    agregarPasajero(c1);

    mostrarCoche(c1);

    ordenamientoPorNombre(c1);

    mostrarCoche(c1);

    agregarPasajero(c1);
    agregarPasajero(c1);
    agregarPasajero(c1);
    agregarPasajero(c1);

    mostrarCoche(c1);

    guardarAuto(c1);


    return 0;
}

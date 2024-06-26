#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "materia.h"
#include "carrera.h"
#define TAM 10

int main()
{

materia m1=cargarMateria("Matematica",6,"Hector Heredia",50);
materia m2=cargarMateria("Fisica",7,"Matias Martin",60);
materia m3=cargarMateria("Quimica",4,"Tomas Trenue",35);
materia m4=cargarMateria("Estructuras",8,"Guillermo Gomes",90);


carrera c1=crearCarrera("ARQUITECTURA",5);

agregarMateria(c1,m1);
agregarMateria(c1,m2);
agregarMateria(c1,m3);
agregarMateria(c1,m4);

mostrarCarrera(c1);

ordenarCarreraProfesor(c1);

mostrarCarrera (c1);

calcularInscriptos (c1);

eliminarMateria(c1,m3);
mostrarCarrera(c1);

    return 0;
}

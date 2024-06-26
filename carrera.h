#ifndef CARRERA_H_INCLUDED
#define CARRERA_H_INCLUDED

struct CarreraE;

typedef struct CarreraE * carrera;

carrera crearCarrera (char n[], int d);

void mostrarCarrera (carrera c);

void agregarMateria (carrera c, materia m);

int buscarPosVacia(carrera c);

void ordenarCarreraProfesor (carrera c);

void calcularInscriptos (carrera c);

void eliminarMateria (carrera c, materia m);

void destruirCarrera (carrera c);

#endif // CARRERA_H_INCLUDED

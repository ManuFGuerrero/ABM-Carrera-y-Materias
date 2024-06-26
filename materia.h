#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED

struct MateriaE;

typedef struct MateriaE * materia;

materia cargarMateria(char n[],int h, char p[], int c);

materia cargarMateriaVacio ();

void mostrarMateria (materia m);

int getCantAlumnos (materia m);

char* getProfesor (materia m);

char* getNombre (materia m);

int getCargaHoraria (materia m);

void destruirMateria (materia m);
#endif // MATERIA_H_INCLUDED

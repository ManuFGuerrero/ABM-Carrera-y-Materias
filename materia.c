#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "materia.h"

struct MateriaE{

char nombre[30];
int cargaHoraria;
char profesor[25];
int cantAlumnos;

};;

//CARGA
materia cargarMateria(char n[], int h, char p[], int c){

materia m=malloc(sizeof(struct MateriaE));

strcpy(m->nombre,n);

m->cargaHoraria=h;

strcpy(m->profesor,p);

m->cantAlumnos=c;


return m;
};

//BORRAR
materia cargarMateriaVacio (){

materia m=malloc(sizeof(struct MateriaE));

strcpy(m->nombre,"VACIO");

m->cargaHoraria=-1;

strcpy(m->profesor,"VACIO");

m->cantAlumnos=-1;


return m;
};

//MUESTRA
void mostrarMateria (materia m){

if(m->cargaHoraria != -1)  {
    printf("\n----->MATERIA: %s<-----\n",m->nombre);
    printf(">Carga Horaria: %d h/s \t>Cantidad de Alumnos: %d\n",m->cargaHoraria,m->cantAlumnos);
    printf(">Profesor: %s\n",m->profesor);
}

};


//GETS
int getCantAlumnos (materia m){
return m->cantAlumnos;}

char* getProfesor (materia m){
return m->profesor;
};

char* getNombre (materia m){
return m->nombre;
};

int getCargaHoraria (materia m){
return m->cargaHoraria;
}

//DESTRUIR
void destruirMateria (materia m){

free(m);
};

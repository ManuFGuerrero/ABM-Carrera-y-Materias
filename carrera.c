#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "materia.h"
#include "carrera.h"
#define TAM 10

struct CarreraE{

char nombre[30];
int duracion;
int cantEstudiantes;


materia materias[TAM];

};;

//CARGA
carrera crearCarrera (char n[], int d){

carrera c= malloc(sizeof(struct CarreraE));

strcpy(c->nombre,n);
c->duracion=d;

for (int i=0;i<TAM;i++){

    c->materias[i]=cargarMateriaVacio();

    }


};

//MUESTRA
void mostrarCarrera (carrera c){


printf("\n\n\n\t CARRERA: %s",c->nombre);
printf("\n>Duracion: %d\n",c->duracion);

for (int i=0;i<TAM;i++){
    mostrarMateria(c->materias[i]);
    }

};

//BUSQUEDA
int buscarPosVacia(carrera c){

int p=-1;

for(int i=0;i<TAM;i++){
    if(getCantAlumnos(c->materias[i]) == -1){
        p=i;
        i=100;
    }
}

return p;
};

//AÑADIR
void agregarMateria (carrera c, materia m){

int pos=buscarPosVacia(c);

if (pos != -1){
    c->materias[pos]=m;
 }else{ printf("\nNO HAY MAS LUGAR CAPO\n");
  }


};

//ORDENAR
void ordenarCarreraProfesor (carrera c){

materia aux;

for (int i=0;i<TAM;i++){

     if ( getCantAlumnos(c->materias[i]) != -1 ){

        for (int j=0;j<TAM-1;j++){

            if ( strcmp ( getProfesor(c->materias[j]),getProfesor(c->materias[j+1]) ) == 1 ){

            aux=c->materias[j];
            c->materias[j]=c->materias[j+1];
            c->materias[j+1]=aux;
            }

        }
    }
}


};

//CALCULAR
void calcularInscriptos (carrera c){

int contador=0;

for (int i=0;i<TAM;i++){

    if (getCantAlumnos(c->materias[i]) != -1 ){

        contador=contador+ getCantAlumnos(c->materias[i]);
    }


}

c->cantEstudiantes=contador;

printf("\nCantidad de Estudiantes de la Carrera %s: %d",c->nombre,c->cantEstudiantes);
};

//BORRAR
void eliminarMateria (carrera c, materia m){

for (int i=0;i<TAM;i++){

    if (strcmp (getNombre(c->materias[i]), getNombre(m) ) == 0 ){

        c->materias[i]=cargarMateriaVacio();
    }

   }

}

//DESTRUIR
void destruirCarrera (carrera c){

free(c);

for (int i=0;i<TAM;i++){

    destruirMateria(c->materias[i]);
}
};

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include "FuncArchivos.h"

int main(int argc, char *argv[]){
  //Definicion de variables
  FILE *fp_e,*fp_s;
  int num, elemento;

  //Indicar a la hora compilar dar en nombre del archivo de entrada y a la vez el de salida
  //Apertura de los archivos de entrada y la creacion del de salida
  fp_e = leer_archivo(argv[1]);
  fp_s = escribir_archivo(argv[2]);
  elemento = atoi(argv[3]);

  //Tomar el primer elemento
  fscanf(fp_e, "%d", &num);
  fprintf(fp_s, "%d", num);

  //Creacion de arreglo y operacion de datos
  arreglo(fp_e,fp_s,num);

  //Se cierran los archivos
   fclose(fp_e);
   fclose(fp_s);
}	
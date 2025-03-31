#include <stdio.h>
#include "funciones.h"


int main(int argc, char *argv[]){
  //Definicion de variables
  FILE *leer,*escribir;
  int num, elemento;

  leer= leer_archivo(argv[1]);
  escribir=escribir_archivo(argv[2]);
  //fscanf(leer, "%d", &num);
  //fprintf(escribir, "%d", num);

  insertardatos(leer, escribir);
  fclose(leer);
  fclose(escribir);
}

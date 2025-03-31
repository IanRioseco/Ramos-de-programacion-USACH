#include <stdio.h>
#include <stdlib.h>

FILE *abrirarchivoleer(char *nomA){
  FILE *p;
  p = fopen(nomA, "r");
  if(p != NULL){
    printf("El archivo a sido correctamente abierto\n");
  }
  else{
    printf("Error al abrir el archivo\n");
  }
  return p;
}

FILE *abrirarchivoescrib(char *nombre){
  FILE *p;
  p = fopen(nombre, "w");
  if(p != NULL){
    printf("El archivo a sido correctamente creado\n");
  }
  else{
    printf("Error al crear el archivo el archivo\n");
  }
  return p;
}
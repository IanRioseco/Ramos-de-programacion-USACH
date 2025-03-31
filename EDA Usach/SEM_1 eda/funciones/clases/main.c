#include <stdio.h>
#include <stdlib.h>
#include "funcioneslistas.h"
#include "funciones.h"


int main(int argc, char*argv[]){
  FILE*archivo;
  Lista*L;
  L=Crearlista();
  archivo=abrirarchivoleer(argv[1]);
  fscanf(archivo,"%d",&L->n);
  L=ingresardatos(L,archivo,L->n);
  nodo*aux;
  aux=L->head;
  while(aux->sig != NULL){
    printf("%d",aux->valor);
    aux=aux->sig;
  }
}




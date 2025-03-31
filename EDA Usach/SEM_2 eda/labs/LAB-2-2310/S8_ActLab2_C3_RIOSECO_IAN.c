#include <stdlib.h>
#include <stdio.h>

/* Agregue el TDA que va a utilizar en esta actividad*/
#include "S8_TDALista_C3.h"

/* Agregue aquí las funciones requeridas para resolver la actividad */
/*
void impar(Listac3 *L,Listac3*L2){
  Nodoc3 *aux;
  aux = L->headc3;
  while(aux->sigc3 != NULL){
    if((aux->infoc3 % 2) != 0){
      c3insertar_nodo_ini(L2,aux->infoc3);
    }
  aux = aux->sigc3;
  }
}
*/
void obtener_impares(Listac3 *L, Listac3* L2) {
  Nodoc3 *aux = L->headc3;
  while (aux != NULL) {
    if (aux->infoc3 % 2 != 0) {
      c3insertar_nodo_fin(L2, aux->infoc3);
    }
    aux = aux->sigc3;
  }
}

int main(int argc,  char *argv[]) {
	
	/* DECLARACIÓN DE VARIABLES 
	  Declare aquí las variables necesarias para resolver los problemas de la actividad */
  Listac3*L;
  Listac3*L2;
  int Elemento,K=4;
  L=c3crear_lista();
  L2=c3crear_lista();
	printf("\n");

		/* PROBLEMA 1. 
		   Escriba las instrucciones necesarias para resolver o mostrar la solución del problema 1 */
    printf("Resultados del problema 1:\n");		
  c3insertar_nodo_ini(L,15);
  c3mostrar_lista(L);
  c3insertar_nodo_fin(L, 30);
  c3mostrar_lista(L);
  c3insertar_nodo_ini(L,20);
  c3mostrar_lista(L);
  c3insertar_nodo_fin(L, 1);
   c3mostrar_lista(L);
  c3insertar_nodo_fin(L, 4);
   c3mostrar_lista(L);
  c3insertar_nodo_ini(L,8);
   c3mostrar_lista(L);
  c3insertar_nodo_ini(L,3);
   c3mostrar_lista(L);
  c3insertar_nodo_fin(L, 5);
   c3mostrar_lista(L);


    printf("\n");

		/* PROBLEMA 2. 
		   Escriba las instrucciones necesarias para resolver o mostrar la solución del problema 2 */
    printf("Resultados del problema 2:\n");	
  Elemento=contarElementos(L);
  printf("%d",Elemento);
  c3mostrar_lista(L);



    printf("\n");

		/* PROBLEMA 3. 
		   Escriba las instrucciones necesarias para mostrar
			 los resultados de las acciones solicitadas en este problema */
    printf("Resultados del problema 3:\n");		
  obtener_impares(L,L2);
  c3mostrar_lista(L2);


    printf("\n");

		/* PROBLEMA 4. 
		   Escriba las instrucciones necesarias para mostrar
			 los resultados de las acciones solicitadas en este problema */
    printf("Resultados del problema 4:\n");		
  eliminar_elemento(L, contarElementos(L));
  c3mostrar_lista(L);


    printf("\n");

		/* PROBLEMA 5. 
		   Escriba las instrucciones necesarias para mostrar
			 los resultados de las acciones solicitadas en este problema */
    printf("Resultados del problema 5:\n");		
  eliminar_elementos_centrales(L, 4);
  c3mostrar_lista(L);
    printf("\n");

		return 0;
}
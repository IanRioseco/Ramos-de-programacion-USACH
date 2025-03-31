#include <stdlib.h>
#include <stdio.h>

/* Agregue el TDA que va a utilizar */
#include "S6_TDALista_B2.h"


/* Agregue aquí las funciones solicitadas para resolver la actividad  */
void elemento_mayor(Listab2*L){
  int num=0;
  Nodob2*elem;
  elem=L->headb2;
  while(elem!=NULL){
    if(num<elem->infob2){
      num=elem->infob2;
    }
  elem=elem->sigb2;
  }
elem=elem->sigb2;
printf("el elemento mayor de la lista es: %d\n",num);
}
void elemento_menor(Listab2*L){
  int num=0;
  Nodob2*elem;
  elem=L->headb2;
  while(elem!=NULL){
    num=elem->infob2;
   while(elem->sigb2 != NULL)
    {
        if(num > elem->infob2)
        {
          num = elem->infob2;
        }
    elem= elem->sigb2;
    }
  elem= elem->sigb2;
  }
  printf("el elemento menor de la lista es: %d\n", num);
}



int main(int argc,  char *argv[]) {
	
		/* DECLARACIÓN DE VARIABLES 
		  Declare aquí las variables necesarias para resolver los problemas de la actividad */
	Listab2*L;
  
		
    printf("\n");

		/* PROBLEMA 1. 
		   Escriba las instrucciones necesarias para resolver el problema 1 */
    printf("Resultados del problema 1:\n");		
		L= b2crear_lista();
		b2insertar_nodo_ini(L,5);
    b2insertar_nodo_ini(L,4);
    b2insertar_nodo_ini(L,2);
    b2insertar_nodo_ini(L,7);
    b2insertar_nodo_ini(L,6);
    b2insertar_nodo_ini(L,3);
    b2insertar_nodo_ini(L,4);
    b2mostrar_lista(L);


    printf("\n");

		/* PROBLEMA 2. 
		   Escriba las instrucciones necesarias para mostrar
			 el  resultado de la función solicitada en el problema 2*/
    printf("Resultados del problema 2:\n");		
    elemento_mayor(L);
    printf("\n");

		/* PROBLEMA 3. 
		   Escriba las instrucciones necesarias para mostrar
			 los resultados de las acciones solicitadas en el problema 3*/
    printf("Resultados del problema 3:\n");		
    elemento_mayor(L);
    elemento_menor(L);


//O LOGRE REALIZAR EL CAMBIO DE LOS PRIMEROS VALORES PPOR LA SUMA DE ESTOS Y EL PROMEDIO





    printf("\n");

		return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* ESTRUCTURA DE DATOS  del TDA lista  */
struct nodob2{
  int infob2;
  struct nodob2 *sigb2;
};
typedef struct nodob2 Nodob2;

struct listab2{
  Nodob2 *headb2;
  int n; //Número de nodos agregados a la lista
};
typedef struct listab2 Listab2;


/* Encabezados de las operaciones programadas*/

Listab2 *b2crear_lista();
int b2is_lista_vacia(Listab2 *L3);
Nodob2 *b2crear_nodo(int val);
void b2insertar_nodo_ini(Listab2 *L3, int val); 
void b2insertar_nodo_fin(Listab2 *L3, int val);
void b2mostrar_lista(Listab2 *L3);
int  b2eliminar_nodo_ini(Listab2 *L3);
int  b2eliminar_nodo_fin(Listab2 *L3);
void b2eliminar_nodo(Listab2 *L3, int valE); /* eliminar para valor dado*/
Nodob2 *b2buscar_Nodo(Listab2 *L3, int val); /* retorna la dirección del nodo */


/* PROGRAMACIÓN OPERACIONES SOLICITADAS EN ACTIVIDAD 2 LAB 
   Programe aquí las operaciones solicitadas */






/* Programación de las Operaciones ELEMENTALES
  IMPORTANTE: No modifique nada de aquí en adelante */

Listab2 *b2crear_lista(){
	Listab2 *L3 = (Listab2*)malloc(sizeof(Listab2));
  L3->headb2 = NULL;
  L3->n = 0;
	return L3;
}

int b2is_lista_vacia(Listab2 *L3){
	if(L3->headb2 == NULL)
		return 1; /*lista vacía retorna un 1*/
	else
		return 0;
}

Nodob2 *b2crear_nodo(int val){
	Nodob2 *new_nodo;
	new_nodo = (Nodob2*)malloc(sizeof(Nodob2));
	new_nodo->infob2 = val;
  new_nodo->sigb2 = NULL;	
  return new_nodo;
}


void b2insertar_nodo_ini(Listab2 *L3, int val){
	Nodob2 *new_nodo;
	new_nodo = b2crear_nodo(val);
	if (!(b2is_lista_vacia(L3))){ 
			new_nodo->sigb2 = L3->headb2;
	}
	L3->headb2 = new_nodo;
	L3->n = L3->n + 1;  /* aumenta el número de nodos de la lista L */
}

void b2insertar_nodo_fin(Listab2 *L3, int val){
	Nodob2 *aux, *new_nodo;
	aux = L3->headb2;
	while(aux->sigb2 !=NULL){
		aux = aux->sigb2;
	}
	new_nodo = b2crear_nodo(val);
	aux->sigb2 = new_nodo;
	L3->n = L3->n + 1;  /* aumenta el número de nodos de la lista L */
}

void b2mostrar_lista(Listab2 *L3){
	Nodob2 *aux;
	if (!(b2is_lista_vacia(L3))){ 
	    aux = L3->headb2;
			printf("\nL->");
	    while(aux != NULL){
		    printf(" %d", aux->infob2);
		    aux = aux->sigb2;
	    }
    }
}

int b2eliminar_nodo_ini(Listab2 *L3){
	Nodob2 *aux;
	int e=0;
	if (!b2is_lista_vacia(L3)) {
		aux =  L3->headb2; 
		L3->headb2 = L3->headb2->sigb2; 
		e = aux->infob2;
		L3->n = L3->n  - 1; /* descuenta el número de nodos de la lista */
		aux->sigb2 = NULL;
		free (aux) ; 
	}
	return e;
}

int  b2eliminar_nodo_fin(Listab2 *L3){
	Nodob2 *aux, *auxE;
	int e=0;
	if (!b2is_lista_vacia(L3)){
		/* mover el aux al penúltimo nodo */
		aux = L3->headb2;
		while(aux->sigb2->sigb2 !=NULL){
				aux = aux->sigb2;
		}		
		e = aux->sigb2->infob2;
		L3->n = L3->n - 1;
		auxE = aux->sigb2;
		aux->sigb2 = NULL;
		free (auxE) ; 
	}
	return e;	
}

Nodob2 *b2buscar_nodo(Listab2 *L3, int val){
	Nodob2 *aux;
	aux = L3->headb2;
	while(aux != NULL){
		if(aux->infob2 != val)
				aux = aux->sigb2;
		else
				return aux;
	}
  return aux;
}

void b2eliminar_nodo(Listab2 *L3, int val){
	Nodob2 *auxE, *aux; 
	int e;
	if  (!b2is_lista_vacia(L3)) {
		auxE = b2buscar_nodo(L3,val);
		if (auxE != NULL){
			if (auxE == L3->headb2){  
			   e = b2eliminar_nodo_ini(L3);
			}else {
			   if (auxE->sigb2 == NULL){ 
						e = b2eliminar_nodo_fin(L3);
			   }else {
						/* Si el nodo a eliminar no está en el inicio ni en el fin 
						   mueve el aux al nodo anterior al que se elimina */
						aux = L3->headb2;
						while(aux->sigb2 != auxE){
								aux = aux -> sigb2;
						}
						auxE = aux->sigb2;
						aux->sigb2 = auxE->sigb2;
						L3->n = L3->n - 1;
						auxE->sigb2 = NULL;
						free (auxE) ; 
				} 
			}
		}
	}	
} 



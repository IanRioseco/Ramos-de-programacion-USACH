
#include <stdio.h>
#include <stdlib.h>

/* ESTRUCTURA DE DATOS  del TDA lista  */
struct nodoc3{
  int infoc3;
  struct nodoc3 *sigc3;
};
typedef struct nodoc3 Nodoc3;

struct listac3{
  Nodoc3 *headc3;
  int n; //Número de nodos agregados a la lista
};
typedef struct listac3 Listac3;


/* Encabezados de las operaciones programadas*/

Listac3 *c3crear_lista();
int c3is_lista_vacia(Listac3 *L3);
Nodoc3 *c3crear_nodo(int val);
void c3insertar_nodo_ini(Listac3 *L3, int val); 
void c3insertar_nodo_fin(Listac3 *L3, int val);
void c3mostrar_lista(Listac3 *L3);
int  c3eliminar_nodo_ini(Listac3 *L3);
int  c3eliminar_nodo_fin(Listac3 *L3);
void c3eliminar_nodo(Listac3 *L3, int valE); /* eliminar para valor dado*/
Nodoc3 *c3buscar_Nodo(Listac3 *L3, int val); /* retorna la dirección del nodo */
int contarElementos(Listac3 *L3);
void eliminar_elemento(Listac3 *L, int n);


/* Programación de las Operaciones ELEMENTALES
  IMPORTANTE: No modifique estas operaciones  */

Listac3 *c3crear_lista(){
	Listac3 *L3 = (Listac3*)malloc(sizeof(Listac3));
  L3->headc3 = NULL;
  L3->n = 0;
	return L3;
}

int c3is_lista_vacia(Listac3 *L3){
	if(L3->headc3 == NULL)
		return 1; /*lista vacía retorna un 1*/
	else
		return 0;
}

Nodoc3 *c3crear_nodo(int val){
	Nodoc3 *new_nodo;
	new_nodo = (Nodoc3*)malloc(sizeof(Nodoc3));
	new_nodo->infoc3 = val;
  new_nodo->sigc3 = NULL;	
  return new_nodo;
}


void c3insertar_nodo_ini(Listac3 *L3, int val){
	Nodoc3 *new_nodo;
	new_nodo = c3crear_nodo(val);
	if (!(c3is_lista_vacia(L3))){ 
			new_nodo->sigc3 = L3->headc3;
	}
	L3->headc3 = new_nodo;
	L3->n = L3->n + 1;  /* aumenta el número de nodos de la lista L */
}

void c3insertar_nodo_fin(Listac3 *L3, int val){
	Nodoc3 *aux, *new_nodo;
	new_nodo = c3crear_nodo(val);
	if (c3is_lista_vacia(L3)){ 
		L3->headc3= new_nodo;
	}else{
		aux = L3->headc3;
		while(aux->sigc3 !=NULL){
			aux = aux->sigc3;
		}
		aux->sigc3 = new_nodo;
	}
	L3->n = L3->n + 1;  /* aumenta el número de nodos de la lista L */
}

void c3mostrar_lista(Listac3 *L3){
	Nodoc3 *aux;
	if (!(c3is_lista_vacia(L3))){ 
	    aux = L3->headc3;
			printf("\nL->");
	    while(aux != NULL){
		    printf(" %d", aux->infoc3);
		    aux = aux->sigc3;
	    }
    }
}

int c3eliminar_nodo_ini(Listac3 *L3){
	Nodoc3 *aux;
	int e=0;
	if (!c3is_lista_vacia(L3)) {
		aux =  L3->headc3; 
		L3->headc3 = L3->headc3->sigc3; 
		e = aux->infoc3;
		L3->n = L3->n  - 1; /* descuenta el número de nodos de la lista */
		aux->sigc3 = NULL;
		free (aux) ; 
	}
	return e;
}

int  c3eliminar_nodo_fin(Listac3 *L3){
	Nodoc3 *aux, *auxE;
	int e=0;
	if (!c3is_lista_vacia(L3)){
		/* mover el aux al penúltimo nodo */
		aux = L3->headc3;
		while(aux->sigc3->sigc3 !=NULL){
				aux = aux->sigc3;
		}	
		e = aux->sigc3->infoc3;
		L3->n = L3->n - 1;
		auxE = aux->sigc3;
		aux->sigc3 = NULL;
		free (auxE) ; 
	}
	return e;	
}

Nodoc3 *c3buscar_nodo(Listac3 *L3, int val){
	Nodoc3 *aux;
	aux = L3->headc3;
	while(aux != NULL){
		if(aux->infoc3 != val)
				aux = aux->sigc3;
		else
				return aux;
	}
  return aux;
}

void c3eliminar_nodo(Listac3 *L3, int val){
	Nodoc3 *auxE, *aux; 
	int e;
	if  (!c3is_lista_vacia(L3)) {
		auxE = c3buscar_nodo(L3,val);
		if (auxE != NULL){
			if (auxE == L3->headc3){  
			   e = c3eliminar_nodo_ini(L3);
			}else {
			   if (auxE->sigc3 == NULL){ 
						e = c3eliminar_nodo_fin(L3);
			   }else {
						/* Si el nodo a eliminar no está en el inicio ni en el fin 
						   mueve el aux al nodo anterior al que se elimina */
						aux = L3->headc3;
						while(aux->sigc3 != auxE){
								aux = aux -> sigc3;
						}
						auxE = aux->sigc3;
						aux->sigc3 = auxE->sigc3;
						L3->n = L3->n - 1;
						auxE->sigc3 = NULL;
						free (auxE) ; 
				} 
			}
		}
	}	
} 
//FUNCION PARA CONTAR ELEMENTOS
int contarElementos(Listac3 *L3){
  int cont=1;
  Nodoc3 *aux;
  aux = L3->headc3;
  while(aux->sigc3 != NULL){
    cont = cont +1;
    aux = aux->sigc3;
  }
  return cont;
}
//FUNCION PARA ELIMINAR EL ELEMENTO CENTRAL
void eliminar_elemento(Listac3 *L, int n){
  Nodoc3 *aux;
  int elemento = 0, pos = 0,posicion=0;
  posicion=(int)(n/2);
  aux = L->headc3;
  while(aux->sigc3 != NULL){ 
    pos = pos + 1;
    if(pos == posicion){
      elemento = aux->infoc3;
    }
    if(posicion > n){
      printf("El elemento no existe");
    }
    aux = aux->sigc3;
  }
  c3eliminar_nodo(L,elemento);
}
//FUNCION PARA ELIMINAR LOS K ELEMENTOS CENTRALES
void eliminar_elementos_centrales(Listac3 *L, int k) {
  int n = contarElementos(L);
  int centro = n/2;
  int inicio = centro - k/2;
  int i;
  Nodoc3 *aux = L->headc3;
  for(i = 0; i < inicio-1; i++) {
    aux = aux->sigc3;
  }
  for(i = 0; i < k; i++) {
    c3eliminar_nodo(L, aux->sigc3->infoc3);
  }
}

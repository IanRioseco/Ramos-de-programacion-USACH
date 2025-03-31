#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Estructura nodo
typedef struct nodo{
    int valor;
    struct nodo *sig; 
}nodo;
//--------------------------------------------------------------------------------
//Estructura lista
typedef struct lista{
    struct nodo *head;
    int n;
}Lista;
//--------------------------------------------------------------------------------
//Funciones elementales
nodo *Crear_nodo();
Lista *Crearlista();
//--------------------------------------------------------------------------------
nodo *Crear_nodo(){
    nodo*n;
    n = (nodo*)malloc(sizeof(nodo));
    n->valor = 0;
    n->sig = NULL;
    return n;
}
//--------------------------------------------------------------------------------
lista *ListaCrearlista(){
     Lista*L;
    L = (Lista*)malloc(sizeof(Lista));
    L->head = NULL;
    return L;
}
//--------------------------------------------------------------------------------
Lista *Insertal_al_final(Lista *lista, int val){
    nodo *aux;
    nodo *nuevo;
    nuevo = Crear_nodo();
    nuevo->valor = val;
    if(lista->head != NULL){
        aux = lista->head;

        while(aux->sig != NULL){
            aux = aux->sig;
        }
        aux->sig = nuevo;
    }
    else{
        lista->head = nuevo;
    }
    return lista;
}
//--------------------------------------------------------------------------------
Lista *Insertar_al_inicio(Lista *lista, int val){
    nodo *nuevo;
    nodo *aux = lista->head;
    nuevo = Crear_nodo();
    nuevo->valor = val;
    if(aux != NULL){
        nuevo->sig = aux;
        lista->head = nuevo;
    }
    else{
        lista->head = nuevo;
    }
    return lista;
}
//--------------------------------------------------------------------------------
Lista *Eliminar_al_Final(Lista *lista){
    nodo *aux = lista -> head;
    nodo *aux2;
    if(lista -> head != NULL){
        while(aux -> sig -> sig != NULL){
            aux = aux -> sig;
        }
        // Guardamos el último elemento
        aux2 = aux -> sig;
        // Eliminamos de la lista el último elemento
        aux -> sig = NULL;
        // Liberamos memoria del último elemento recién eliminado de la lista
        free(aux2);
    }
    return lista;
}
//--------------------------------------------------------------------------------
Lista *Eliminar_al_Inicio(Lista *lista){
    nodo *aux = lista -> head;
    if(lista -> head != NULL){
        if(lista -> head -> sig != NULL){
            lista -> head = lista -> head -> sig;
            free(aux);
        } else {
            lista -> head = NULL;
        }
    }
    return lista;
}
//--------------------------------------------------------------------------------
Lista *ingresardatos(Lista *L, FILE *p, int n){
  int datos;
  for(int i = 0; i <= n; i++){
    fscanf(p, "%d", &datos);
    L  = Insertal_al_final(L, datos);
  }
  return L;
}
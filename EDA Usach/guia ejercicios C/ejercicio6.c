/*. Dados dos arreglos A1 Y A2, construya un algoritmo en pseudocódigo que entregue la cantidad de veces que cada elemento en A1 se encuentra en A2. No use arreglos auxiliares*/
#include <stdio.h>

//Encabezado de las funciones
int tamaño_arr(int A[]);
void elementos(*a, *b, n, m);

int main(void) {
  //Declaracion de variables, arreglos y punteros
  int A[] = {1,2,3,4,5}, B[] = {6,6,6,6,6,6}, n, m, *a, *b;
  n = tamaño_arr(A); //Tamaño del arreglo A
  m = tamaño_arr(B); //Tamaño del arreglo B
  a = &A; //a --> A[0]
  b = &B; //b --> B[0]
  elementos(a, b, n, m); //Llamada a la funcion elementos
  return 0;
}

/*Funcion elementos: Entra un puntero a y b con los tamaños de los arreglos, se guardara en auxiliar el primer elemento del arreglo A a travez del puntero *a se le ira sumando i para que recorra la lista hasta n - 1, se crea otro ciclo en el cual se recorrera la lista B hasta m - 1, por ultimo se crea un if el cual se compara los elementos del aux vs los elementos que apunta el puntero *b y si se cumple la condicion se sumara 1 a la cantidad*/
void elementos(int *a, int *b, int n, int m){
  int i, j, aux = 0, cantidad = 0;
  for(i = 0; i <= n - 1; i++){
    aux = *(a + i);
    for(j = 0; j <= m - 1; j++){
      if(aux == *(b + j)){
        cantidad = cantidad + 1;
      }
    }
  }
  printf("La cantidad de elementos que se encuentran en A1 en A2 es de: %d", cantidad);
}

/*Funcion tamaño_arreglo: Devuelve el tamaño de nuestros arreglos*/
int tamaño_arr(int A[]){
  int tam;
  tam = sizeof(A)/sizeof(A[0]);
  return tam;
}
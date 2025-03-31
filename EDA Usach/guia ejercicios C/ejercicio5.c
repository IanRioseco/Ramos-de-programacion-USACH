/*Dado un arreglo A, construya un algoritmo en pseudocódigo que invierta el orden de los elementos 
de dicho arreglo. Utilice el mismo arreglo sin crear arreglos auxiliares.*/

#include <stdio.h>

//Declaracion de funciones
void invertir(int *a, int *b, int n);
void swap(int *a, int *b);

int main() {
  //Declaracion del arreglo
  int A[] = {1,2,3,4,5,6}, *a, *b;

  //Asignacion de direcciones de memoria a los punteros a-->A[0] y b-->A[0]
  a = &A;
  b = &A;

  //Llamada a la funcion invertir
  invertir(a, b, 6);

  //Muestra de los valores del arreglo ya invertidos
  for(int i = 0; i <= 6 - 1; i++){
    printf(" %d ", *(a + i));
  }
  
}

/*Funcion Invertir: Invierte los valores tomando la primera posicion y la ultima a travez de los punteros haciendo un swap*/
void invertir(int *a, int *b, int n){
  int i, j;
  for(i = 0, j = n; i<= (n/2) - 1; i++, j--){
    swap((a + i), (b + j - 1));
  }   
}

/*Funcion swap: Toma 2 punteros que apuntan hacia algo e intercambian los valores a donde estan apuntando */
void swap(int *a, int *b){
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
  
}
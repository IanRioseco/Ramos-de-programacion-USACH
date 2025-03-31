
#include <stdio.h>
/*Construya un algoritmo en pseudocódigo que reciba tres arreglos de largo distinto (A1, A2 y A3), y guarde todos sus elementos en A1, eliminando los elementos repetidos. No use arreglos auxiliares.*/

int tamaño_arr(int A[]);
void eliminar_elementos(int *a, int *b, int *c, int A[], int B[], int C[]);

int main(void) {
  int A[] = {0,0,0,0,0,0,0,0,0,}, B[] = {1,2,3,4,5,1}, C[] = {1,2,3,4,5}, *a, *b, *c;
  a = &A;
  b = &B;
  c = &C;
  eliminar_elementos(a, b, c, A, B, C);
  for(int i = 0; i <= 10 - 1; i++){
    printf(" %d ", *(a + i));
  }
  return 0;
}

void eliminar_elementos(int *a, int *b, int *c, int A[], int B[], int C[]){
  int i, j, k, l, m , n, aux;   
  for(i = 0; i <= 6 - 1; i++){
    aux = *(b + i);
    for(j = 0; j <= 5 - 1; j++){
      if(aux == *(c + j)){
          *(a + i) = aux;
        }
      }
    }
  }

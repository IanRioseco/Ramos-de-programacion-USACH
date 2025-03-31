 /*Implemente un algoritmo en pseudocódigo que, dado un arreglo A con valores enteros positivos,
indique la cantidad de elementos consecutivos (la primera encontrada) cuya suma sea igual a un determinado valor S. Ejemplos:
Si A = {7, 6, 5, 4, 3, 2, 1} y S = 13, el resultado es 2 (2 números consecutivos su que suma(7+6) es 13)
Si A = {1, 2, 3, 4, 5, 6, 5} y S = 13, el resultado es 3 (3 números consecutivos su suma(6+5+1) es 8)
Si A = {3, 2, 3, 4, 5, 6, 5} y S = 15, el resultado es 3 (3 números consecutivos su suma(4+5+6) es 15)
Si A = {3, 6, 8, 7, 5, 2, 9} y S = 8 el resultado es 1
Si A = {1, 6, 3, 7, 5, 2, 9} y S = 8 el resultado es 0
Nota: Si no encuentra números consecutivos que la suma sea S, el resultado es 0. */

#include <stdio.h>

int suma_cons(int *p, int n);

int main(void) {
  int *p, A[] = {7, 5,1, 5, 4, 3, 2, 1}, n = 9;
  p = &A;
  suma_cons(p, n);
}


int suma_cons(int *p, int n){
  int S = 13, suma = 0, cont = 0, i;
  for(i=0; i<=n-1; i++){
    suma+= *(p + i);
    cont++;
    if(suma == S){
      printf("cantidad de elementos consecutivos que suman %d: %d\n",S, cont);
      return 0;
    }
    else if (suma >S){ 
    suma = 0;
    i -= cont;
    cont = 0;
    printf("Cantidad de elementos consecutivos que suman %d: 0\n", S);
    return 0;
    }
  }
}

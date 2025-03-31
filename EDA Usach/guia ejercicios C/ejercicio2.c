/*Implemente un programa C que lea un número (entrada de datos por teclado) y que dicho número
sea modificado por una función tipo void pasado por referencia. Demuestre que la modificación del número no se hace efectiva cuando éste no es pasado por referencia a la función.*/

#include <stdio.h>
void modificacion(int *a);

int main(void) {
  int num, *a;
  //Pedimos el numero
  printf("Entregue un numero: ");
  scanf("%d", &num);
  //Asignarle la direccion de memoria a (a) de num
  a = &num;
  //Imprimimos num
  printf("Antes de modificar: %d\n", num);
  //Cambiamos el numero que esta en num a travez del puntero (a)
  modificacion(a);
  //Imprimimos el puntero a
  printf("Despues de modificar %d:", *a);
  
  return 0;
}


void modificacion(int *a){
  *a = 60;
}
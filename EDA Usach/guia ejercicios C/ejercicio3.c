/*Implemente un programa C que reciba dos enteros (entrados por teclado) y realice las siguientes funciones:
a. Que sume dichos números. Utilice pasada de parámetros por referencia.
b. Que intercambie los números. Utilice pasada de parámetros por referencia.*/

#include <stdio.h>


void intercambio(int *c, int *d);
void suma(int *c, int *d);

int main(void) {
  int a, b, *c, *d;
  //Peticion de datos
  printf("ingrese el numero a:");
  scanf("%d",&a);
  printf("ingrese el numero b:");
  scanf("%d",&b);
  //Engache de memoria
  c=&a; //c-->a
  d=&b; //d-->b
  //Llamada de la funcion suma
  suma(c,d);
  printf("Antes del intercambio a = %d y b = %d\n", *c, *d);
  //Intercambio de valores a travez de parametros por referencia
  intercambio(c, d);
  printf("Despues del intercambio a = %d y b = %d\n", *c, *d);
  
  
}


void suma(int *c, int *d){
  printf("La suma de %d + %d es: %d\n", *d, *c, *c + *d );
}

void intercambio(int *c, int *d){
  int aux;
  aux = *d;
  *d = *c;
  *c = aux;
}
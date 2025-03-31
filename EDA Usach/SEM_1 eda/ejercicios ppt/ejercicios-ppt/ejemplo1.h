#include <stdio.h>
#include <stdlib.h>
int obtener_suma(int a, int b){
  int suma;
  suma = a+b;
  return suma;
}

void main(void) {
  int a, b, suma=0;
  printf("ingrese numeros a y b: ");
  scanf("%d %d",&a,&b);
  /*suma = obtener_suma(a, b);*/
  
  printf("la suma es %d\n",obtener_suma(a,b));  
}



#include <stdio.h>

void division(int n, int x);

void main(){
  int n, x;
  printf("Ingrese un rango: ");
  scanf("%d", &n);
  printf("Ingrese un numero para dividir: ");
  scanf("%d", &x);
  division(n, x);
  }

void division(int n, int x){
  int aux = 0, resultado = 0, contadornum= 0;;
  for(int i = 1; i <= n; i++){
    if((i % x) == 0){
      aux = i;
      resultado = resultado + aux;
      printf("%d\n", resultado);
      }
    else{
      printf("El numero %d no es divisible por %d\n", i, x);
    }
  }                                                 
}

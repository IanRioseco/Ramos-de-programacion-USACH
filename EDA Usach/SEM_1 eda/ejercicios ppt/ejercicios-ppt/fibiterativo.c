#include <stdio.h>

int fib_iter(int x){
  int a=0,b=1,s;
  for(int i=1;i<x;i++){
    s = a + b;
    a = b;
    b = s; 
  }
  return s;
}
int main(){
  int x;
  printf("ingrese el numero de fibonacci: ");
  scanf("%d",&x);
  printf("el valor de fibonaccio es %d", fib_iter(x));
}


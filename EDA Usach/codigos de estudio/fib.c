#include <stdio.h>

void main(){
  int a=0,b=1,i=1,x,s=0;
  printf("ingrese el numero de fibonacci: ");
  scanf("%d",&x);

  while(i<=x){
    a=b;
    b=s;
    s=a+b;
    i+=1;
  }
printf("el valor de fibonacci es %d", s);
}



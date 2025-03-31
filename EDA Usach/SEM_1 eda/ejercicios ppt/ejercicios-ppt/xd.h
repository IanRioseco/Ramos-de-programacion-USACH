
#include <stdio.h>
int main(void){
  int num,resto,val;
  resto=0;
  val=2;
  printf("ingrese un numero: ");
  scanf("%d", &num);
  resto= num%val;
  
  if(resto==0){
    printf("es un numero par");
  }
  if(resto!=0){
    printf("no es un numero par");
  }
}

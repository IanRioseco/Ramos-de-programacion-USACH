#include <stdio.h>
int main(){
  int n1,n2;
  printf("ingrese el primer numero: ");
  scanf("%d",&n1);
  printf("ingrese el segundo numero: ");
  scanf("%d",&n2);

if(n1<n2){
  printf("el menor es %d:", n1); 
}  
else{
  printf("el menor es %d:", n2);
}
  return 0;
  
}
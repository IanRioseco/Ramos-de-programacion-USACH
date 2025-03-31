#include <stdio.h>
#include <stdlib.h>

int elevado(int a, int b){
    int res=1;
    for(int i = 0; i<b; i++){
        res=a*res;
    }
    return res;
}

int division(int a, int b){
    int div = 0;
    div=a / b;
    return div;
}

int fibonacci(int a,int b){
    int menor=0,n1=0,n2=1,i=1,s=0;
    if(a!=b){
        if(a<b){
            menor=a;
        }else{
            menor=b;
        }
    }
    while(i<=menor){
        n1=n2;
        n2=s;
        s=n1+n2;
        i+=1;
    }
    return s;

}

int main(void){
    int a,b;
    printf("ingrese el primer numero:\n");
    scanf("%d",&a);
    printf("ingrese el segundo numero:\n");
    scanf("%d",&b);
    printf("el valor de la exponenciacion es: %d\n",elevado(a,b));
    printf("la division es: %d\n",division(a,b));
    printf("el numero de la sucesion de fib es: %d\n",fibonacci(a,b));
    return 0;
}

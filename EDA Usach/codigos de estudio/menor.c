
#include <stdio.h>
int obtener_menor(int n1,int n2){
    int menor=0;
    if(n1!=n2){
        if(n1<n2){
            menor=n1;
        }else{
            menor=n2;
        }
    }
    return menor;
}

int main(){
    int n1,n2;
    printf("ingrese dos numeros: ");
    scanf("%d %d",&n1,&n2);
    int men= obtener_menor(n1,n2);
    if(men!=0){
        printf("el menor es: %d\n", men);
    }

    //if(n1<n2){
    //    printf("el %d es menor:", n1);
    //}
    //if(n1>n2){
    //    printf("el %d es menor:", n2);
    //}
}
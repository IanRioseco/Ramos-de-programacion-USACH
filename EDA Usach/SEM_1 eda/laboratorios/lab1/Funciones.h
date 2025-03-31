#include <stdlib.h>
#include <stdio.h>

void arreglo(FILE*fp_e,FILE*fp_s,int n);
void suma_negativo(int*arr,int n);
void numero_neg_pos(FILE*fp_s,int*arr,int n);
void ordenar(int *arr, int n);

void arreglo(FILE*fp_e,FILE*fp_s,int n){
  int*arr;
  arr=(int*)malloc(sizeof(int)*n);
  for(int i=0;i<=n-1;i++){
    fscanf(fp_e,"%d",&arr[i]);
    printf(" %d ",arr[i]);
  }
  suma_negativo(arr,n);
  numero_neg_pos(fp_s,arr,n);
  ordenar(arr, n);
}

void suma_negativo(int*arr,int n){
  int acum = 0, i;
  for(i=0; i<=n - 1; i++){
    if(arr[i]<0){
      acum=acum+arr[i];
    }
  }
  printf("\nLa suma de todos los numeros negativos es de: %d",acum);
}
void numero_neg_pos(FILE*fp_s,int*arr,int n){
  int acumN=0,acumP=0,i=0;
  for(i=0;i<=n-1;i++){
    if(arr[i]<0){
      acumN++;
    }
    else{
      acumP++;
    }
  }
  fprintf(fp_s,"\nLa cantidad de numeros negativos es de: %d\n",acumN);
  fprintf(fp_s,"La cantidad de numeros positivos es de: %d\n",acumP);
}

void ordenar(int *arr, int n){
  int i, j, aux;
  printf("\nLos elementos de su arreglo ordenados son: ");
  for(i = 0; i < n; i++){
    for(j = i + 1; j< n - 1; j++){
      if(arr[i] > arr[j]){
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
      }
    }
    printf(" %d ", arr[i]);
  }
}
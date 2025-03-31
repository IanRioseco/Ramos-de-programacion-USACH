#include <stdlib.h>
#include <stdio.h>

FILE *leer_archivo(char*nombre);
FILE *escribir_archivo(char*nombre);
void insertardatos(FILE *p, FILE *s);
void cantidad_positiva_negativa(FILE *s, int *arreglo, int n);
void suma_datos(int *arreglo, int n);
void ordenar(int A[], int n);

//FUNCION QUE ABRE Y LEE EL CONTENIO DEL ARCHIVO
FILE *leer_archivo(char*nombre){
  FILE *fil;
	fil = fopen(nombre, "r");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre);
	return fil;
}
//FUNCION QUE ABRE Y LEE EL CONTENIO DEL ARCHIVO
FILE *escribir_archivo(char*nombre){
  FILE *fil;
	fil = fopen(nombre, "w");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre);
	return fil;
}

//FUNCION PARA INSERTAR LOS DATOS EN EL ARCHIVO DE SALIDA
void insertardatos(FILE *p, FILE *s){
    int n, *arreglo, i;

    fscanf(p,"%d",&n);

    arreglo = (int*)malloc(sizeof(int)*n);

    printf("Los datos del archivo son:");
    for( i = 0; i <= n - 1; i++){
        fscanf(p,"%d", &arreglo[i]);
        printf(" %d ", arreglo[i]);

    }

    cantidad_positiva_negativa(s, arreglo ,n);
    suma_datos(arreglo, n);
    ordenar(arreglo, n);

    
}
//FUNCION PARA CONTAR EL NUMERO DE NEGATIVOS Y POSITIVOS
void cantidad_positiva_negativa(FILE *s, int *arreglo, int n){
    int positivo = 0, negativo = 0, i;
    
    for (i = 0; i <= n - 1; i++){
        if (arreglo[i] < 0){
            negativo = negativo + 1;
        }
        else{
            positivo = positivo + 1;
        } 
    }
    fprintf(s, "La cantidad total de elementos es de: %d\n", n);
    fprintf(s, "La cantidad de numeros negativos es de: %d\n", negativo);
    fprintf(s, "La cantidad de numeros positivos es de: %d\n", positivo);
}

//FUNCION PARA SUMAR LOS DATOS
void suma_datos(int *arreglo, int n){
    int acum = 0, i;
    for (i = 0; i <= n - 1; i++){
        acum = acum + arreglo[i];
    }
    printf("\nLa suma de todos los datos del archivo es de: %d\n", acum);
}

//FUNCION PARA ORDENAR LOS DATOS
void ordenar(int A[], int n){
  int i, j, aux;
  printf("Los elementos de su arreglo ordenados son: ");
  for(i = 0; i < n; i++){
    for(j = i + 1; j <= n - 1; j++){
      if(A[i] > A[j]){
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
    printf(" %d ", A[i]);
  }
}
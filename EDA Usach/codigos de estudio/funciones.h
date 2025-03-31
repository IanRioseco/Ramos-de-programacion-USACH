#include <stdio.h>
#include <math.h>

int suma_Arr(int A[], int n);
FILE *abrirarchivoleer();
void creacion_arr(FILE *p, int n);
int largo(int A[]);
void verificarigualdad(int A[], int B[], int n, int m);


int suma_Arr(int A[], int n){
  int i, resultado = 0;
  for(i = 0; i <= n - 1; i++){
    resultado = A[i] + resultado;
  }
  return resultado;
}

/*
FILE *abrirarchivoleer(char *nomA){
  FILE *p;
  p = fopen(nomA, "r");
  if(p != NULL){
    printf("El archivo a sido correctamente abierto\n");
  }
  else{
    printf("Error al abrir el archivo\n");
  }
  return p;
}*/

FILE *abrirarchivoleer(){
  FILE *p;
  char nombre[30];
  printf("Ingrese el nombre del archivo: ");
  scanf("%s", nombre);
  p = fopen(nombre, "r");
  if(p != NULL){
    printf("El archivo a sido correctamente abierto\n");
  }
  else{
    printf("Error al abrir el archivo\n");
  }
  return p;
}


/*
FILE *abrirarchivoescrib(char *nombre){
  FILE *p;
  p = fopen(nombre, "w");
  if(p != NULL){
    printf("El archivo a sido correctamente creado\n");
  }
  else{
    printf("Error al crear el archivo el archivo\n");
  }
  return p;
}*/

FILE *abrirarchivoescrib(){
  FILE *p;
  char nombre[30];
  printf("Ingrese el nombre del archivo: ");
  scanf("%s", nombre);
  p = fopen(nombre, "w");
  if(p != NULL){
    printf("El archivo a sido correctamente creado\n");
  }
  else{
    printf("Error al crear el archivo el archivo\n");
  }
  return p;
}

void creacion_arr(FILE *p, int n){
  char arr[n], valor;
  int i;
  for(i = 0; i <= n - 1; i++){
    while((valor = getc(p)) != EOF){
      arr[i] = valor;
      printf("%c", arr[i]);
    }
  }
}

void verificarigualdad(int A[], int B[], int n, int m){
  int i, j, contador = 0;
  if(n != m){
    printf("Los arreglos son distintos");
    }
  if(n == m){
    for(i = 0; i<= n; i++){
        for(j = 0; j<=m; j++){
          if(A[i] == B[j]){
            contador = contador + 1;
          }
        }
      }
    }
  if(contador == n && contador == m){
    printf("Los arreglos son iguales");
  }
  else{
    printf("Los arrelgos son distintos");
  }
}

int elevado(int A[], int n){
  int resultado, i;
  for(i = 0; i <= n - 1; i++){
    resultado = pow(A[i], 2);
  }
  return resultado;
}


void escribir_contenido(FILE *s, int n, int A[]){
  int i, resultado;
  fprintf(s, "%d\n", n);
  for(i = 0; i<= n - 1; i++){
    A[i] = pow(A[i],2);
    fprintf(s, "%d ", A[i]);
  }
}

int producto_punto(int A[], int B[], int n){
int resultado = 0, i, j;
  for(i = 0; i<= n - 1; i++){
    for(j = 0; j<= n - 1; j++){
      if( i == j){
        resultado = A[i] * B[j] + resultado;
      }
     }
    }
  return resultado;
}
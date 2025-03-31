#include <stdio.h>
#define largo_nombre 30
typedef struct alumnos{
  int codigo;
  char nombre[largo_nombre];
  int edad;
  float nota_prome;
  
}alumnos;

int main(void) {
  alumnos alumno;
  printf("ingrese el codigo del alumno: ");
  scanf("%d", &alumno.codigo);
  printf("\ningrese el nombre del alumno: ");
  scanf("%s", &alumno.nombre);
  printf("\ningrese la edad del alumno: ");
  scanf("%d", &alumno.edad);
  printf("\ningrese el promedio de notas del alumno: ");
  scanf("%f", &alumno.nota_prome);
  //declarar un variable 
}
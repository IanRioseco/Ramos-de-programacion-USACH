#include <stdio.h>
#include "Funciones.h"

int main(int argc, char *argv[])
{
  int A[] = {1,2,3,4,5}, B[] ={1,3,4,2,5}, n, num, resultado;
  FILE *p, *w;
  char opcion;
  do
  {
    printf("EL PROGRAMA GG\n ");
    printf("1. Suma de elementos de un arreglo A de enteros\n ");
    printf("2. Lectura de un archivo con números y que lo almacene en un arreglo\n");
    printf("3. Verificar si dos arreglos de enteros son iguales\n");
    printf("4. Producto punto de dos vectores de enteros\n");
    printf("5. Crear archivo con su arreglo elevado al cuadrado\n");
    printf("Elija su opcion: ");

  
    scanf("%d", &num);
    switch(num)
    {
      case 1:
       printf("El resultado la suma es de: %d", suma_Arr(A, 5));
        break;

      case 2:
        p = abrirarchivoleer();
        fscanf(p, "%d", &n);
        creacion_arr(p, n);
        break;
  
      case 3:
        verificarigualdad(A, B, 5, 5);
        break;
  
      case 4:
        printf("El producot punto de su arreglo A y B es de: %d", producto_punto(A, B, 5));
        break;
  
      case 5:
        w = abrirarchivoescrib();
        escribir_contenido(w, 5, A);
        break;

      default:
        printf("Opcion no valida");
    }
    printf("\n¿Deseas elegir otra opcion? (y/n): ");
    scanf("%c", &opcion);
  }  while(opcion == 'y');
  return 0;
}
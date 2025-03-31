/*Dado un vector de 10 elementos = 1, 2, 3, 4, 4, 7, 8, 9, 5, 4, escribir una función en C (haciendo uso de puntero) que muestre las direcciones de memoria y el contenido de cada elemento del vector.
Programe otra función que modifique los elementos del vector, multiplicando cada elemento por el valor ubicado en la posición anterior a él (asuma que el valor anterior al primer elemento es 0). Los cambios se deben ver reflejados desde el main (parámetros por referencia). */

#include <stdio.h>
//Definicion de encabezado de funciones
void memoria(int*p);
void multiplicacion(int A[], int *p, int Aux[]);

int main(void) {
  //Se definen las listas y los punteros
  int A[]= {1, 2, 3, 4, 4, 7, 8, 9, 5, 4}, Aux[10], *p;
  //El puntero P-->A[0]
  p=&A;
  
/*Llamada de las funciones memoria el cual nos muestra la direccion de memoria de cada elemento en que posicion de la lista esta y a que elemento corresponde*/
  
  memoria(p);

/*Llamada de la funcion multiplicacion la cual multiplica cada elemento con su antecesor*/
  multiplicacion(A, p, Aux);
  
/*Muestra la lista A con sus valores cambiados a traves del puntero P*/
for(int i=0;i<=10-1;i++){ 
  printf(" %d ", *(p+i));
  }
}


void memoria(int*p){
  for(int i=0;i<=10-1;i++){
    printf("la direccion de memoria es %p y el contenido del elemento del vector en la posicion %d es: %d\n",p+i,i,*(p+i));
  }
}

void multiplicacion(int A[], int *p, int Aux[]){
  int aux;
  for(int i = 0; i <= 9; i++){
    Aux[i] = *(p + i);
  }
  
  for(int i=0;i<=10-1;i++){
    aux = Aux[i - 1]; // aux = NULL
    if(aux == NULL){
      *p = *p * 0;
    }
    else{ 
      *(p + i) = aux * *(p + i);/* aux = 1    
                                *(p + 1) = 1 * 2         */
    }
  }
}
/*Dados dos arreglos D y S, donde D contiene el dato y S la posición (indice) del siguiente elemento
del arreglo. Se conoce L que es la posición del primer elemento del arreglo y el último elemento se
reconoce porque S contiene el valor -1 (ver figura, donde L=8). Considere que el índice comienza
desde 1. Construya un algoritmo en pseudocódigo para:
D:[3,8,2,7,4, ,10,1,6, ]
S:[5,7,1,2,9,-2,-1,3,4,-2]

a. Mostrar los elementos del arreglo
b. Agregar un elemento al final del arreglo
c. Eliminar un elemento x del arreglo 
*/

#include <stdio.h>
#include <stdlib.h>

void mostrarArreglo(int D[], int S[], int L); // Función para mostrar el arreglo
int agregarElemento(int D[], int S[], int L, int nuevoElemento); // Función para agregar un elemento
int eliminarElemento(int D[], int S[], int L, int elementoAEliminar); // Función para eliminar un elemento

int main(){
int D[] = {3, 8, 2, 7, 4,0, 10, 1, 6,0}; // Arreglo D
int S[] = {5, 7, 1, 2, 9, -2, -1, 3, 4, -2}; // Arreglo S
int L = 8; // Posición del primer elemento
int num,x;

printf("ingrese un elemento a agregar: ");//se pide un elemento para ingresar al arreglo
scanf("%d",&num);

printf("ingrese un elemento a eliminar: ");//se pide un elemento para ingresar al arreglo
scanf("%d",&x);

mostrarArreglo(D, S, L);// llamada a la funcion para mostrar los arreglos
agregarElemento(D,S,L,num);
eliminarElemento(D,S,L,x);
mostrarArreglo(D, S, L);

}

void mostrarArreglo(int D[], int S[], int L) {
int i = L - 1; // índice del primer elemento
while (S[i] != -1) { // mientras no sea el último elemento
printf("%d ", D[i]);
i = S[i] - 1; // siguiente índice
}
printf("%d ", D[i]); // mostrar último elemento
}

int agregarElemento(int D[], int S[], int L, int numero){
int ultimo=L-1;
while(S[ultimo]!=-1){
    ultimo= S[ultimo]-1;
}
D[ultimo+1]=numero;
S[ultimo]=ultimo +2;
S[ultimo+1]=-1;
}

int eliminarElemento(int D[], int S[], int L, int elementoAeliminar){
    int ant=-1,numero=L;
    while(numero=!-1){
        if(D[numero-1]==elementoAeliminar){
            break;
        }
        ant = numero;
        numero=S[numero-1];

    }
    if (numero == -1) {
  // No se encontró el elemento
  printf("El elemento no está en el arreglo.\n");
} else {
  // Eliminar el elemento
  if (ant == -1) {
    // El elemento a eliminar es el primer elemento
    L = S[numero-1];
  } else {
    S[ant-1] = S[numero-1];
  }
}

}
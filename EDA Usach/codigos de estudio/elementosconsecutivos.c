#include <stdio.h>

int main() {
int A[] = {7, 6, 5, 4, 3, 2, 1}; // arreglo de ejemplo
int S = 13; // valor a buscar
int tam = sizeof(A)/sizeof(A[0]); // tamaño del arreglo
int suma = 0, cont = 0; // variables para sumar y contar elementos consecutivos
for(int i=0; i<tam; i++) {
suma += A[i]; // sumar elemento actual
cont++; // aumentar contador de elementos consecutivos
if(suma == S) { // si la suma es igual a S
printf("Cantidad de elementos consecutivos que suman %d: %d\n", S, cont); // imprimir resultado
return 0; // terminar programa
}
else if(suma > S) { // si la suma es mayor a S
suma = 0; // reiniciar la suma
i -= cont; // retroceder al inicio del grupo de elementos consecutivos
cont = 0; // reiniciar el contador
}
}
printf("Cantidad de elementos consecutivos que suman %d: 0\n", S); // si no encontró elementos, imprimir 0
return 0;
}

/*
SEMANA 1. Ejercicios pseudocodigo y traspase a lenguaje C

PROBLEMA 1:
Dados dos arreglos A y B de enteros de largo n, calcular el producto punto
A = [2,3,5,0]   // elemento 2 de A es A[1] ya que las posiciones comienzan de 0
B = [5,1,2,3]
AxB = a1*b1 + a2*b2... 

num producto_punto(num A[], num B[], num n)
BEGIN
   num resultado = 0, i
   FOR i=0 TO n-1
		resultado = resultado + A[i]*B[i]
       
   RETURN resultado
END

ejecuta_algoritmo_pp()
BEGIN
	num A[4]={2,3,5,0}
	num B[4]={5,1,2,3}
	num res = producto_punto(A,B,4)
	WRITE(res)
END
-------------------------------------------------------------
PROBLEMA 2:
Dado un arreglo A de enteros, mostrar el mayor elemento, el menor elemento y 
el promedio de los valores. 
Vamos a crear 3 algoritmos y otro que muestre los resultados:

num obtener_menor(num A[], num n)
BEGIN
	num i=1,menor
	menor = A[0]  // menor = 2
	WHILE i < n DO
		IF A[i] < menor
			menor = A[i]
		i= i+1
	RETURN menor
END

num obtener_mayor(num A[], num n)
BEGIN
	num i=1,mayor
	mayor = A[0]  // mayor= 2
	WHILE i < n  DO
		IF A[i] > mayor
			mayor = A[i]
		i= i+1
	RETURN mayor
END

num obtener_promedio(num A[], num n)
BEGIN
	num sum_y_prom=0,i=0
	WHILE i < n  DO
		sum_y_prom = sum_y_prom + A[i]
		i= i+1
	RETURN sum_y_prom/n
END

mostrar_Mayor_men_Prom(num A[], num )
BEGIN
	 A = {2,3,5,0}
   WRITE( " El menor es:", obtener_menor(A, n))
   WRITE( " El mayor  es:", obtener_mayor(A, n))
   WRITE( " El promedio  es:", obtener_promedio(A, n))
END
-------------------------------------------------------------
*/


#include <stdio.h>
#define TAM 4
/* Función 1 */
int producto_punto(int A[],int B[],int n){
   int resultado,i;
   resultado = 0;
   for (i=0; i<n;i++){
		resultado = resultado + A[i]*B[i];
   }
   return resultado;
}
/* cree las demás funciones */

int main(){
	/*Problema 1 */ 
	int producto;
	int A[TAM] = {2,3,5,0};  //Arreglo A de tamaño fijo 4
	int B[TAM] = {5,1,2,3};  //Arreglo B de tamaño fijo 4
	
	producto = producto_punto(A,B,TAM); 
	
	printf("\nProducto entre A y B : %d", producto);
	
	//Ejecutar cada una de las funciones del PROBLEMA 2
	

	//¿es necesario ejecutar todas las funciones del problema 2? 
	
	
	
	return 0;
	
}

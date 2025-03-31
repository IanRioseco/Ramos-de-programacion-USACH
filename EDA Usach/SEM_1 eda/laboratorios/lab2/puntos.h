#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*estructura de datos del TDA punto */

struct punto{
	float x;
	float y;
};
typedef struct punto Punto;

//Encabezados de las funciones (operaciones del TDA Punto)*/

// Punto *crearPunto(float n1, float n2);
// int obtenerCuadrante(Punto *P);
// void mostrarPunto(Punto *A);
// void deplazarPunto(float dx, float dy, Punto *A);
// float obtenerDistanciaDesdeOrigen(Punto *A);
// float obtenerDistancia(Punto *A, Punto *B);
// float obtenerDistancia2(Punto *A, Punto *B);
// float obtenerPuntoMedio(Punto *A, Punto *B);

//Programar primera función del TDA
//¿qué falta en esta función?

Punto *crearPunto(float n1, float n2){
	Punto *p;
	p = (Punto*)malloc(sizeof(Punto)) ;
	p->x = n1;
	p->y = n2;
	return p;
}

//proponga una alternativa de función
int obtenerCuadrante(Punto *P){
	if (P->x >= 0 && P->y>=0) return 1;
	if (P->x <  0 && P->y>=0) return 2;
	if (P->x <  0 && P->y<0) return 3;
	if (P->x >= 0 && P->y<0) return 4;
}


void mostrarPunto(Punto *A){
	printf("\n (%f,%f)", A->x, A->y);
}

//proponga el desplazamiento en dirección y magnitud
void deplazarPunto(float dx, float dy, Punto *A){
	A->x = A->x + dx; 
	A->y = A->y + dy; 
}

Punto *agregarpunto(Punto *arrpunto, Punto *punto, int i){
    arrpunto[i].x = punto->x;
    arrpunto[i].y = punto->y;
    printf("Punto Agregado correctamente a la lista");
    return arrpunto;
}

float obtenerdistanciaarr(Punto *arrpunt, int n){
  float distancia_x, distancia_y, distancia;
  for(int i = 0; i < n - 1; i++){
    distancia_x = pow((arrpunt[i + 1].x - arrpunt[i].x), 2);
    distancia_y = pow(arrpunt[i + 1].y - arrpunt[i].y, 2);
    distancia = distancia_x + distancia_y;
    distancia = sqrt(distancia);
  }
  return distancia;
}

void buscarmayor(Listab2 *L){
  int elemento = 0;
  Nodob2 *aux;
  aux = L->headb2;
  while(aux!= NULL)
  {
    elemento = aux->infob2;
    while(aux->sigb2 != NULL)
    {
        if(elemento < aux->infob2)
        {
          elemento = aux->infob2;
        }
    aux = aux->sigb2;
    }
  aux = aux->sigb2;
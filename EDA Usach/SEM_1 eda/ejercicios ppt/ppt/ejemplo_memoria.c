/* este programa hay que explicarlo bien 
   Quedando claro lo modificamos para que quede en su versión 
	 de largo dinámico. Guardar con otro nombre
	 */


#include <stdio.h>
#define MAX_ELEM 20

/* prototipos o encabezados de funciones utilizadas: ENTIENDA BIEN LA ENTRADA Y SALIDA DE PARAMETROS */
int numeroElementos(char nomArchivo[]);
void cargarDatos(char nomArchivo[], int array[], int n);

int main(){
	int conta_int = 0;
	int i, n, A[MAX_ELEM];
	conta_int = conta_int + MAX_ELEM + 2;
	char archivo[] = "2datoss2m.txt";
	n = numeroElementos(archivo);
	printf("\nNúmero de filas en el arreglo: %d\n", n);
	cargarDatos(archivo,A,n);

  //int suma_arreglo = sumar(a,n);
  //printf("suma: %d", suma_arreglo);
	for (i=0;i<n;i++){
		printf("%d\n",A[i]);
	}	
	
	int memoria = sizeof(int) * conta_int + sizeof(char)* 13;
	printf("La memoria utilizada %d", memoria);
	return 0;
}


/*programación de las funciones */

int numeroElementos(char nomArchivo[]){
	FILE *fp;
	int n=0;
	fp = fopen(nomArchivo,"r"); 
	if (fp == NULL)
		printf("Error al abrir el archivo");
	else
		fscanf(fp,"%d", &n);
	fclose(fp);
	return n;
}


void cargarDatos(char nomArchivo[], int array[], int n){
	FILE *fp;
	int i, numero;
	fp = fopen(nomArchivo,"r"); 
	if (fp == NULL)
		printf("Error al abrir el archivo");
	else{
		fscanf(fp,"%d", &numero);
		if (numero == n){
			for(i=0;i<n;i++)
				fscanf(fp,"%d", &array[i]);
		}
	}
	fclose(fp);
}

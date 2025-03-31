
#include <stdio.h>
#define MAX_ELEM 20

//-------------------------------------------------
/* SECCIÓN de encabezados o prototipos de funciones */
int numeroElementos(char nomArchivo[]);
void cargarDatos(char nomArchivo[], int array[], int n);


//-------------------------------------------------
/* SECCIÓN Función principal */
int main(){
	int conta_int=0, conta_char=0, memoria; /*para contar la memoria */
	int i, n, A[MAX_ELEM];
	
	conta_int = conta_int + MAX_ELEM + 3;
	
	char archivo[] = "datos.txt";
	n = numeroElementos(archivo);
	printf("\nNúmero de enteros a guardar en el arreglo: %d\n", n);
	
	cargarDatos(archivo,A,n);
	
	/*aquí llame a la función suma y muestre el resultado */
	
	for (i=0;i<n;i++){
		printf("\n%d",A[i]);
	}	
	
	memoria = sizeof(int)* conta_int + sizeof(char) * 13;
	printf("\nMemoria utilizada en el main: %d\n", memoria);
	return 0;
}

//-------------------------------------------------
/*SECCIÓN DE programación de funciones */

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

/* ACTIVIDADES:
- Revise la memoria que está utilizando todo su programa
- cree la función que sume los elementos del arreglo:
  1) Ponga el encabezado de la función
	2) Luego programela en la sección bajo del main
	3) Ejecute la función desde el main
*/
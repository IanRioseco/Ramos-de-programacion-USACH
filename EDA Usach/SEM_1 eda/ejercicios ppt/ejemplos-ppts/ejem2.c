/*

Ejercicio 2: Complete el siguiente programa de tal forma que lea un archivo y muestre su contenido.

#include <stdio.h>
___ *abrir_archivo(){
		char nombre_archivo[30];
		FILE *fil;
		printf("Ingrese nombre del archivo que va a utilizar:\n");
		scanf("%s",nombre_archivo);
		:
}
___ mostrar_contenido_archivo(FILE *fil){
		char caracter;
		:
		while((caracter = getc(….)) != EOF){
		:
		}
}


int main(){
		FILE *fp;
		fp = abrir_archivo(..);
		mostrar_contenido_archivo(..);
		fclose(..);
}

*/


#include <stdio.h>
FILE *abrir_archivo(){
 	FILE *fil;
   	char nombre_archivo[30];
   	printf("Ingrese nombre del archivo que va a utilizar:\n");
   	scanf("%s",nombre_archivo);
	fil = fopen(nombre_archivo, "r");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre_archivo);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre_archivo);
	return fil;
}
void  mostrar_contenido_archivo(FILE *fil){
 	char caracter;
	while((caracter = getc(fil)) != EOF){
      		printf("%c",caracter);
   	}
}
int main(){
   FILE *fp;
   fp = abrir_archivo();
   mostrar_contenido_archivo(fp);
   fclose(fp);
}	

/* COMPILAR CON:
gcc fil_ejer2.c -o ejer2.exe

EJECUTAR CON:
./ejer2.exe 

*/
#include <stdio.h>
#include <stdlib.h>

FILE *abrir_archivo(char*nombre){
 	FILE *fil;
	fil = fopen(nombre, "r");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre);
	return fil;
}
void  mostrar_contenido_archivo(FILE *fil){
 	char caracter;
	while((caracter = getc(fil)) != EOF){
      		printf("%c",caracter);
   	}
}

int main(int argc,char*argv[]){
    FILE *cont;
    cont =abrir_archivo(argv[1]);
    mostrar_contenido_archivo(cont);
    fclose(cont);
}
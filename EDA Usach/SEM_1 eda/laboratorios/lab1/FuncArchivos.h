#include <stdlib.h>
#include <stdio.h>

FILE *leer_archivo(char*nombre);
FILE *escribir_archivo(char*nombre);


//FUNCION QUE ABRE Y LEE EL CONTENIO DEL ARCHIVO
FILE *leer_archivo(char*nombre){
  FILE *fil;
	fil = fopen(nombre, "r");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre);
	return fil;
}

//FUNCION QUE ABRE Y LEE EL CONTENIO DEL ARCHIVO
FILE *escribir_archivo(char*nombre){
  FILE *fil;
	fil = fopen(nombre, "w");
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nombre);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nombre);
	return fil;
}
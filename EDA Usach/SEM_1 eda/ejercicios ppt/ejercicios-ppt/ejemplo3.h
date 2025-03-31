
#include <stdio.h>
#define NOM_FIL_ENTRADA "entrada.txt" //este archivo debe existir en su equipo
#define NOM_FIL_SALIDA "salida.txt"
#define LARGO_NOM 30
#define LARGO_LIN 200

FILE *abrir_archivo(char nomA[LARGO_NOM], char *modo_lec){
    FILE *fil;
	fil = fopen(nomA, modo_lec);
	if (fil == NULL){
		printf("Error al abrir archivo %s\n", nomA);
		return NULL;
	}
	printf("Archivo %s se abre correctamente\n", nomA);
	return fil;
}
int escribir_contenido_archivo(FILE *fil_e, FILE *fil_s){
 	char linea[LARGO_LIN];
	while(fgets(linea,LARGO_LIN,fil_e)!= NULL){
		fputs(linea,fil_s);
	}
}
int main(){
   FILE *fp_e,*fp_s;
   fp_e = abrir_archivo(NOM_FIL_ENTRADA,"r");
   fp_s = abrir_archivo(NOM_FIL_SALIDA,"w");       
   escribir_contenido_archivo(fp_e,fp_s);
   fclose(fp_e);
   fclose(fp_s);
   printf("Archivo de salida %s creado y escrito\n", NOM_FIL_SALIDA);
}	

/* COMPILAR CON:
gcc fil_ejer3.c -o ejer3.exe

EJECUTAR CON:
./ejer3.exe 

*/
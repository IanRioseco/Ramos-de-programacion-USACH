#include <stdio.h>
#include <stdlib.h>

typedef struct {
char* nombre;
char* Rut;
int edad;
float estatura;
} INDIVIDUO;

void escribirDatosEnArchivo(INDIVIDUO* Personas, int numPersonas) {
FILE* archivo = fopen("datos.txt", "a");

if (archivo == NULL) {
    printf("Error al abrir el archivo.\n");
    return;
}

for (int i = 0; i < numPersonas; i++) {
    fprintf(archivo, "Nombre: %s, Rut: %s, Edad: %d, Estatura: %.2f\n",
    Personas[i].nombre, Personas[i].Rut, Personas[i].edad, Personas[i].estatura);
}

fclose(archivo);
}

int main(int argc, char** argv){

// Obtener el número de personas desde el primer argumento de la línea de comandos
int numPersonas = atoi(argv[1]);
printf("Número de personas:");
scanf("%d",&numPersonas);

// Reservar memoria para el arreglo de personas
INDIVIDUO* Personas = (INDIVIDUO*)malloc(numPersonas * sizeof(INDIVIDUO));

// Pedir información para cada persona
for (int i = 0; i < numPersonas; i++) {
// Reservar memoria para el nombre y pedirlo al usuario
Personas[i].nombre = (char*)malloc(20 * sizeof(char));
printf("Ingrese el nombre de la persona #%d: ", i + 1);
scanf("%s", Personas[i].nombre);

// Reservar memoria para el Rut y pedirlo al usuario
Personas[i].Rut = (char*)malloc(12 * sizeof(char));
printf("Ingrese el Rut de la persona #%d: ", i + 1);
scanf("%s", Personas[i].Rut);

// Pedir la edad y la estatura de la persona
printf("Ingrese la edad de la persona #%d: ", i + 1);
scanf("%d", &Personas[i].edad);
printf("Ingrese la estatura de la persona #%d: ", i + 1);
scanf("%f", &Personas[i].estatura);

// Separar cada persona con un línea de guiones para mejorar el formato
printf("-------------------------------------------------------------\n");
}
escribirDatosEnArchivo(Personas, numPersonas);
// Mostrar la información de todas las personas
for (int i = 0; i < numPersonas; i++) {
printf("Nombre: %s, Rut: %s, Edad: %d, Estatura: %.2f\n",
Personas[i].nombre, Personas[i].Rut, Personas[i].edad, Personas[i].estatura);
}
// Liberar la memoria reservada para los nombres y los Ruts de todas las personas
for (int i = 0; i < numPersonas; i++) {
free(Personas[i].nombre);
free(Personas[i].Rut);
}

// Liberar la memoria reservada para el arreglo de personas
free(Personas);

printf("la memoria total es: %d\n",sizeof(INDIVIDUO)+sizeof(escribirDatosEnArchivo));
return 0;
}

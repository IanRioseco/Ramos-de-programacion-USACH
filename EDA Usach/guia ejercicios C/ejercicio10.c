/*Escriba un algoritmo en pseudocódigo que a través del uso de un arreglo de estructuras, almacene
los cumpleaños de n amigos. Los datos a almacenar para cada amigo son nombre, día, mes y año
del cumpleaños. Asuma que los datos de los n amigos los recibe en un arreglo de string separados
por por coma. El algoritmo debe entregar como resultado:
a) quiénes y cuántos amigos están de cumpleaños en un día y mes dados. Muestre nombre y edad.
b) quienes y cuántos amigos están de cumpleaños en un mes dado. Muestre nombre y fecha.
c) quién(es) tiene(n) la menor edad. Muestre el nombre y su edad.
Considere lo siguiente:
● En el recorrido del arreglo de la función c) use operación ++ de punteros .
● Documente las operaciónes realizadas en los algoritmos que utilice para resolver el problema
planteado.
Programe su solución anterior con lenguaje C y responda las siguientes preguntas: ¿Cuál es el tamaño
en bytes de la estructura definida? ¿Cuál es el tamaño en bytes al almacenar 5, 10, 20 o 30 amigos?*/

#include <stdio.h>
#include <stdlib.h>








/*
typedef struct {
char* nombre;
int* dia;
int* mes;
int* año;
} INDIVIDUO;

void escribirDatosEnArchivo(INDIVIDUO* Personas, int numPersonas) {
FILE* archivo = fopen("datos.txt", "a");

if (archivo == NULL) {
    printf("Error al abrir el archivo.\n");
    return;
}

for (int i = 0; i < numPersonas; i++) {
    fprintf(archivo, "Nombre: %s, Rut: %s, Edad: %s, Estatura: %.s\n",
    Personas[i].nombre, Personas[i].dia, Personas[i].mes, Personas[i].año);
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

printf("Ingrese el Rut de la persona #%d: ", i + 1);
scanf("%d", Personas[i].dia);

// Pedir la edad y la estatura de la persona

printf("Ingrese la edad de la persona #%d: ", i + 1);
scanf("%d", &Personas[i].mes);

printf("Ingrese la estatura de la persona #%d: ", i + 1);
scanf("%d", &Personas[i].año);

// Separar cada persona con un línea de guiones para mejorar el formato
printf("-------------------------------------------------------------\n");
}
escribirDatosEnArchivo(Personas, numPersonas);
// Mostrar la información de todas las personas
for (int i = 0; i < numPersonas; i++) {
printf("Nombre: %s, Rut: %s, Edad: %s, Estatura: %.s\n",
Personas[i].nombre, Personas[i].dia, Personas[i].mes, Personas[i].año);
}
// Liberar la memoria reservada para todas las personas
for (int i = 0; i < numPersonas; i++) {
free(Personas[i].nombre);
free(Personas[i].dia);
free(Personas[i].mes);
free(Personas[i].free(Personas[i].Rut););
}

// Liberar la memoria reservada para el arreglo de personas
free(Personas);

printf("la memoria total es: %d\n",sizeof(INDIVIDUO)+sizeof(escribirDatosEnArchivo));
return 0;
}

/*a) quiénes y cuántos amigos están de cumpleaños en un día y mes dados. Muestre nombre y edad.
void cum_dia_mes(){
    int d,m,num,cont,actual=2023,edad=0;
    printf("ingrese el dia y mes para encontrar a los que estan de cum: "):
    scanf("%s %s",&d,&m);
    
    for(int i;i<=num;i++){
        scanf(archivo,"%s %s %s %s",Personas[i].nombre, Personas[i].dia, Personas[i].mes, Personas[i].año);
        if(d==persona[i].dia && m==persona[i].mes){
            cont++
            edad = actual-persona[i].año;
            printf("nombre: %s,edad: %s\n",personas[i].nombre,edad);
        }

    }
}
#include <stdio.h>
#include <stdlib.h>
FILE *leer_archivo(char*nombre);
FILE *escribir_archivo(char*nombre);

// Estructura para almacenar información de cada persona
struct Persona {
    char nombre[50];
    int anoNacimiento;
    int cantidadCiudades;
};
void eliminarMenoresDe18(struct Persona personas[], int *cantidad);
int contarMayoresDe18(struct Persona personas[], int cantidad);
float calcularPromedioCiudades(struct Persona personas[], int cantidad);

int main(int argc, char *argv[]) {
  FILE *leer, *escribir;
// Problema 1:MOSTRAR PARAMETROS DE ENTRADA
  printf("Archivo de entrada: %s\n", argv[1]);
  printf("Archivo de salida: %s\n", argv[2]);
  
//FUNCIONA PROBLEMA 2:LEER Y MOSTRAR EL CONTENIDO DEL ARCHIVO DE ENTRADA
  leer=leer_archivo(argv[1]);//se llama a la funcion para leer el archivo en cual ingresa por parametros
  
  int cantelementos;//variable para la cantidad de elementos                         dentro del archivo
  
    fscanf(leer, "%d", &cantelementos);//se le el primer valor al cual es la cantidad de elementos
  
    struct Persona personas[cantelementos];//se le da el tamaño a la estructua
  
//FUNCIONA PROBLEMA 3 Y 4:CREAR ESTRUCTURA LINEAL PARA ALMACENAR LOS DATOS
for (int i = 0; i < cantelementos; ++i) {
  // se crea el ciclo para leer todos los datos dentro del archivo y asignarlos a la estructura
  
  fscanf(leer, "%s %d %d", personas[i].nombre, &personas[i].anoNacimiento, &personas[i].cantidadCiudades);
  }
  fclose(leer);//se cierra el archivo de entrada
  
//FUNCIONA PROBLEMA 5:MOSTRAMOS LOS RESULTADOS POR CONSOLA
  printf("Cantidad de personas mayores de 18 años: %d\n", contarMayoresDe18(personas, cantelementos));//se llama a la funcion que calcula a los mayores de edad
  
    printf("Promedio de ciudades: %.2f\n", calcularPromedioCiudades(personas, cantelementos));//se llama a la cuncion que calcula el promedio de las ciudades
  
    eliminarMenoresDe18(personas, &cantelementos);//se llama a la funcion que elimina a los menores de eda
  
    printf("Después de eliminar menores de 18, la nueva cantidad de elementos es: %d\n", cantelementos);//se muestra la nueva cantidad de elementos luego de eliminar a los menores
  
//FUNCIONA PROBLEMA 6: ESCRIBIMOS EN EL ARCHIVO DE SALIDA
  escribir=escribir_archivo(argv[2]);//llamada a la funcion para escribir dentro del archivo
  
  fprintf(escribir, "%d\n", cantelementos);
    for (int i = 0; i < cantelementos; ++i) {
//se crea un ciclo para escribir cada dato de la esctructura en el archivo de salida
      fprintf(escribir, "%s %d %d\n", personas[i].nombre, personas[i].anoNacimiento, personas[i].cantidadCiudades);
    }
}
//=============================================================
//FUNCION QUE LEE EL ARCHIVO DE ENTRADA
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
//=============================================================
//FUNCION PARA ESCRIVIR EN EL ARCHIVO DE SALIDA
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
//=============================================================
//FUNCION PARA CALCULAR LA CANTIDAD DE PERSONA MAYORES DE 18
int contarMayoresDe18(struct Persona personas[], int cantidad) {
  int cont = 0;
  for (int i = 0; i < cantidad; ++i) {
    //se crea el ciclo para verificar la edad de cada persona
      if ((2023 - personas[i].anoNacimiento) > 18) {
        //se verifica si la persona en mayor o no
      cont++;//si se cumple aumentamos el contador
      }
  }
  return cont;
}
//=============================================================
//FUNCION PARA CALCULAR EL PROMEDIO DE CIUDADES
float calcularPromedioCiudades(struct Persona personas[], int cantidad) {
    int totalCiudades = 0;
    for (int i = 0; i < cantidad; ++i) {
      //se crea un ciclo para sumar las ciudades que ha visitado cada persona a una variable auxiliar
      totalCiudades += personas[i].cantidadCiudades;
      //se suma la cantiadad de ciudades visitadas por personas a la variable
    }
    return (float)totalCiudades / cantidad;
    //se devuelve el promedio de las ciudades visitadas
}
//=============================================================
//FUNCION PARA ELIMINAR A LOS MENORES DE 18 AÑOS
void eliminarMenoresDe18(struct Persona personas[], int *cantidad) {
    int i, j;
    for (i = 0; i < *cantidad; ++i) {
      //ciclo para ir verificando la mayoria de edad de cada           persona
        if ((2023 - personas[i].anoNacimiento) < 18) {
            //se verifica si la persona es menor de edad
            // Eliminar persona menor de 18 años
            for (j = i; j < *cantidad - 1; ++j) {
              //ciclo para eliminar a los menores de edad
                personas[j] = personas[j + 1];
            }
            (*cantidad)--;
            i--; // Decrementar i para revisar el elemento                         movido
        }
    }
}
//=============================================================

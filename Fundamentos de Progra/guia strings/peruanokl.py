### BLOQUE DE DEFINICIÓN
## IMPORTACIÓN DE FUNCIONES
import matplotlib.pyplot as plt
import numpy as np
## DEFINICIÓN DE FUNCIONES
def leer_archivo(nombre):
    '''Función que lee un archivo de texto
       Entrada: nombre del archivo a leer(str)
       Salida: contenido del archivo(str)
    '''
    archivo = open(nombre, 'r')
    contenido = archivo.read()
    return contenido

def procesar_archivo(contenido):
    '''Funcion que separa y ordena el contenido de un texto
        Entrada: contenido del texto(str)
        Salida: texto ordenado
    '''
    contenido = contenido.split('\n')
    i = 0
    while i < len(contenido):
        contenido[i] = contenido[i].split(',')
        i += 1
    contenido.remove(contenido[0])
    return contenido




## DEFINICIÓN DE CONSTANTES

### BLOQUE PRINCIPAL
## ENTRADAS
file = leer_archivo('Ruta.txt')
## PROCESAMIENTO
resultado = procesar_archivo(file)

#print(resultado[0][3])

#servicios
servicio = []
servicio2 =[]
i = 0
x = len(resultado)
while i < len(resultado):
    x = resultado[i][3]
    if x != 'B':
        servicio.append(resultado[i])
    if x == "B":
        servicio2.append(resultado[i])
    i += 1

print(servicio)
print(servicio2)
#print(resultado)



#grafico
coordenada_x = []
i = 0
while i < len(resultado):
    p_coordenada= resultado[i][1]
    coordenada_x.append(int(p_coordenada))
    i+=1

coordenada_y = []
j = 0
while j < len(resultado):
    s_coordenada= resultado[j][2]
    coordenada_y.append(int(s_coordenada))
    j += 1

g = plt.plot(coordenada_x, coordenada_y)
plt.show()

#print(coordenada_x)
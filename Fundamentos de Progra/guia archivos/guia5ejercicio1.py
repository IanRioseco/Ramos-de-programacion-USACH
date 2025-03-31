'''Construya un programa en Python que cuente la cantidad de vocales y consonantes en un texto
en inglés entregado en un archivo de entrada llamado ‘texto.txt’, un ejemplo de entrada sería:'''

def leer_archivo(nombre_archivo):
    ''' Función que lee el contenido de un archivo de texto
        Entrada: Nombre del archivo (string)
        Salida: Contenido del archivo (string)
    '''
    with open(nombre_archivo, 'r', encoding='utf-8') as archivo:
        # LEER
        contenido = archivo.read()
    return contenido
def limpiar_texto(texto):
    ''' Función que limpia caracteres especiales y saltos de línea del
        texto.
        Entrada: texto (string)
        Salida: texto limpio (string)
    '''
    texto = texto.replace(',',' ')
    texto = texto.replace('\n',' ')
    texto = texto.replace('?',' ')
    texto = texto.replace('   ',' ')
    texto = texto.replace('  ',' ')
    texto = texto.replace("'",' ')
    return texto
def contar_vocal(lista):
    vocal='aeiou'
    i = 0
    v = 0
    while i < len(lista):
        x = lista[i]
        if x in vocal:
            v += 1
        i += 1
        resultado = v
    return resultado
def contar_conso(lista):
    conso='bcdfghjklmnpqrstvwxyz'
    i = 0
    c = 0
    while i < len(lista):
        x = lista[i]
        if x in conso:
            c+=1
        i+=1
        resultado = c
    return resultado

archivo = leer_archivo('ejercicio1guia5.txt')
print(archivo)
contenido = limpiar_texto(archivo)
print(contenido)
contenido = list(contenido)
print(contenido)
total= contar_vocal(contenido)
total2 = contar_conso(contenido)

print('la cantidad de vocales es',total,'la cantidad de consonantes es', total2)







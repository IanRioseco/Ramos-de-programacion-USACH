'''Construya un programa que encuentre la palabra más larga en un texto, considere que el texto 
le será entregado desde un archivo llamado ‘texto.txt’. Use como base el ejercicio para una sola 
línea visto en clases.
'''
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
def buscar_palabra_mas_larga(palabras):
    '''funcion que busca la palabra mas larga en un archivo de texto
        entrada:contenido del archivo (string)
        salida: palabra mas larga del texto (string)
    '''
    maxima = palabras[0]
    for palabra in palabras:
        if '\'' not in palabra:
            if len(palabra) > len(maxima):
                maxima = palabra
    return maxima

archivo = leer_archivo('ejercicio2guia5.txt')
archivo = limpiar_texto(archivo)
lista_archivo = archivo.split(' ')
palabra = buscar_palabra_mas_larga(lista_archivo)


print('la palabra mas larga es', palabra)

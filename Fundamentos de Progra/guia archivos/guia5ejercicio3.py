'''Construya un programa que reciba como entrada un texto a través de archivo y una palabra e 
indique si la palabra está en el texto o no. No puede usar el operador in para este ejercicio, ni 
funciones o métodos para encontrar substrings o sublistas (tales como .find()).
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
def limpiar_archivo(texto_archivo):
    ''' Función que limpia caracteres especiales y saltos de línea del
        contenido del archivo.
        Entrada: texto (string)
        Salida: texto limpio (string)
    '''
    texto = texto_archivo.replace(',',' ')
    texto = texto.replace('\n',' ')
    texto = texto.replace('?',' ')
    texto = texto.replace('   ',' ')
    texto = texto.replace('  ',' ')
    texto = texto.replace("'",' ')
    return texto
def palabra_repetida(texto):
    '''funcion que verifica si la palabra ingresada esta repetida en el texto
        entrada = contenido archivo (string)
        salida = cantidad de veces que se repite la palabra (string)
    '''
    repetida = 0
    i = 0 
    while i < len(texto):
        if palabra == texto[i]:
            repetida += 1
        i += 1
    return repetida

palabra= input('ingrese la palabra que desea buscar como repetida: ')
archivo = leer_archivo('ejercicio3guia5.txt')
archivo = limpiar_archivo(archivo)
archivo = archivo.split(' ')
palabra= palabra_repetida(archivo)

print('la palabra que ingreso se encuentra', palabra, ' veces en el texto')




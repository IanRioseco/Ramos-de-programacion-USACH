
def leer_archivo(nombre_archivo):
    '''funcion la cual lee el contendio del archivo
        entrada =
    '''
    with open(nombre_archivo, 'r', encoding='utf-8') as archivo:

        contenido = archivo.read()
    return contenido

def procesar_archivo2(contenido):
    '''funcion que elimina caracteres especiales,saltos de linea y 
        espacios multiples del texto
        entrada = contenido del texto (string)
        salida = texto procesado (string)
    '''
    contenido = contenido.replace('\n',' ')
    contenido = contenido.replace('   ',' ')
    contenido = contenido.replace('  ',' ')
    contenido = contenido.replace('.',' ')
    contenido = contenido.replace("'",' ')
    contenido = contenido.replace(',',' ')
    contenido = contenido.replace('?',' ')
    return contenido
def comparar_palabras(cont1,cont2):
    lista = []
    for element in cont1:
        if element not in cont2:
            lista.append(element)
    return  lista


archivo1 = leer_archivo('ejercicio8traduccionpropia.txt')
archivo1 =procesar_archivo2(archivo1)
archivo1 = archivo1.split(' ')
archivo2 = leer_archivo('ejercicio8traducciondistinta.txt')
archivo2 =procesar_archivo2(archivo2)
archivo2 = archivo2.split(' ')

print('las palabras exclusivas de tradiccion propia son: ',comparar_palabras(archivo1,archivo2))

print('las palabras exclusivas de tradiccion distinta son: ',comparar_palabras(archivo2,archivo1))
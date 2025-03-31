def leer_archivo(nombre_archivo):
    ''' Función la cual lee el contenido dentro de un archivo
        Entrada: Nombre del archivo (string)
        Salida: Contenido del archivo (string)
    '''
    with open(nombre_archivo, 'r', encoding='utf-8') as archivo:
        # LEER
        contenido = archivo.read()
    return contenido

def procesar_archivo(contenido):
    '''funcion que separa y ordena el contenido del texto
        entrada = contenido del texto (strings)
        salida = contenido del texto ordenados (strings)
    '''
    contenido = contenido.lower()
    contenido = contenido.split('\n')
    i = 0
    while i < len(contenido):
        contenido[i]=contenido[i].split(',')
        i+=1
 
    return contenido

def ordenar(contenido):
    '''funcion que ordena de mayor a menor el contenido del texto
       entrada = contenido texto (string)
       salida = lista ordenada de mayor a menor (string)
    '''
    lista_aux = []       
    while len(contenido) > 0:
            maximo = 0
            i = 0
            while i < len(contenido):
                    if contenido[i][1] > contenido[maximo][1]:
                            maximo = i
                    if contenido[i][1] == contenido[maximo][1] and \
                    contenido[i][1] > contenido[maximo][1]:
                            maximo = i
                    i = i + 1
            lista_aux.append(contenido[maximo])
            contenido.pop(maximo)
    return lista_aux


def comparar_senales(cont1,cont2):
    lista = []
    i = 0
    while i < len(cont1):
        j = 0
        while j < len(cont2):
            if cont1[i][0] == cont2[j]:
                lista.append()
            j +=1
        j=0
        i+=1
    return  lista

texto1 =leer_archivo('ejercicio7signal-strenght.txt')
texto1 = procesar_archivo(texto1)

texto2 = leer_archivo('ejercicio7networks.txt')
texto2 = procesar_archivo(texto2)

print(comparar_senales(texto1,texto2))


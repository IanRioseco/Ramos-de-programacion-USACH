def leer_archivo(nombre_archivo):
    '''funcion la cual lee el contendio del archivo
        entrada =
    '''
    with open(nombre_archivo, 'r', encoding='utf-8') as archivo:

        contenido = archivo.read()
    return contenido

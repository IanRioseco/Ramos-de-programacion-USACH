'''
def mesas(numero_de_mesas):

    entrada = numero de mesas (entero)
    alida = nombre txt, contenido del txt transformado (lista)

    i = 1
    while i <= numero_de_mesas:
        nombre = ('mesa-'+str(i)+'.txt')
        res = leer(nombre)
        res = procesar_archivo(res)
        
        hola = res[0]
        x = res.remove(res[0])
        print(res)
        print(hola)

        print(res)
        i +=1
    return res
def escribir()
# Entrada

# numero de mesas que se desea revisar
numero_mesas = input('ingrese el numero de mesas: ')

# Procesamiento
# el numero de mesas de pasa a entero
numero_mesas = int(numero_mesas)
# se llama a la funcion mesas
lista_mesa = mesas(numero_mesas)

i = 0
while i <len(lista_mesa):
    x = lista_mesa[0][0]
    xd=lista_mesa.remove(lista_mesa[0][0])
    print(lista_mesa)
    i += 1

def verificar_votos(cantidad_votos,lista):
funcion que verifica si la suma de los votos es igual a la entregad en el txt

    aux = cantidad_votos
    if lista[2] == aux:
        print('esta mesa es cuadrada')
    else:
         print('esta mesa no es cuadrada')
    return True
'''

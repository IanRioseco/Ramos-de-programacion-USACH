'''Construya un programa en Python que reciba como entrada un valor y una posición, e 
inserte el valor en dicha posición de una lista.
'''

# ENTRADA
lista = []
valor = int(input('ingrese un valor: '))
posicion = int(input('ingrese la pocion de su valor: '))

# PROCESAMIENTO
lista.insert(posicion,valor)
print(lista)


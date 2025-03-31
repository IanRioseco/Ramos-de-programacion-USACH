'''Construya un programa en Python que reciba como entrada un elemento y elimine dicho 
elemento tantas veces como aparezca en una lista. El programa deberá informar la 
cantidad de elementos que eliminó al finalizar'''

lista = list(map(int,input("Ingrese los numeros que desea, separadas por espacio: ").split(" ")))
print(lista)
valor = int(input('ingrese el numero que desea eliminar: '))

 # PROCESAMIENTO
num = 0
i = 0
x = 0
while i < len(lista):
    x = lista[i]
    if x == valor:
        num += 1
        lista.remove(valor)
    i += 1
print('se elimino el numero',valor, 'que aparece',num, 'veces')



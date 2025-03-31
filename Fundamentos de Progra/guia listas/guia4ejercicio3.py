'''Construya un programa en Python que reciba una lista de números e indique si la lista 
está ordenada de menor a mayor o no'''

# ENTRADA
lista = list(map(int,input("Ingrese una lista de números enteros, separados por espacio: ").split(" ")))
print(lista)
copia =list(map(int,input("ingrese la misma lista: ").split(" "))) 
copia.sort()
if copia == lista:
    print('la lista esta ordenada de menor a mayor')
else:
    print('la lista no esta ordenada de menor a mayor')
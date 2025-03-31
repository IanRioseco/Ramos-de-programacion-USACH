'''Construya un programa en Python que ordene una lista de valores numéricos de menor 
a mayor, sin usar métodos, ni funciones para ordenar u obtener mínimos o máximos. 
a) Realice este programa usando una lista auxiliar para guardar el resultado. 
b) Realice el programa sin definir una nueva lista'''

lista = list(map(int,input("Ingrese una lista de números enteros, separados por espacio: ").split(" ")))

lista_min = lista[0]
i = 0
while i < len(lista):
    if  lista[i]<lista_min:
        lista_min.append(lista[i])
    i += 1

print(lista_min)
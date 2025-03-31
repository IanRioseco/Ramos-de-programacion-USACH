#EJERCICIO1
#ENTRADA
lista = list(map(int,input("Ingrese una lista de números enteros, separados por espacio: ").split(" ")))
print(lista)
y = int(input("pregunte por el valor que quiere encontrar en la lista: "))
#PROCESO Y SALIDA
if y in lista:
    print(y, "está en la lista")
else:
    print(y, "no está en la lista")
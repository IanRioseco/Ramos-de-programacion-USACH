#EJERCICIO2
#ENTRADA "count()" a  la mala
lista = list(map(int,input("Ingrese una lista de números enteros, separados por espacio: ").split(" ")))
print(lista)
y = int(input("que dato quiere contar:"))
z = 0 
i = 0
f = 0 
#PROCESO
while i < len(lista):
    f = lista[i]
    if f == y:
        z += 1
    i += 1
#SALIDA
print("el valor", y, "aparece", z, "veces")
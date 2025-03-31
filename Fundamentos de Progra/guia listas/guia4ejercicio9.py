# ENTRADA
#
presupuesto = int(input("ingrese su presupuesto: "))
pelotas = list(map(int,input("ingrese los precios de las pelotas: ").split(" ")))
print(pelotas)
camisetas = list(map(int,input("Ingrese los precios de las camisetas: ").split(" ")))
print(camisetas)
# PROCESAMIENO
i = 0
maximo = 0
while i < len(pelotas):
    j = 0
    while j < len(camisetas):
        total = pelotas[i] + camisetas[i]
        if total > maximo and total <= presupuesto:
            maximo = total
        j += 1
    i += 1
# SALIDA
print('el valor mas cercano al presupuesto es', maximo)
            



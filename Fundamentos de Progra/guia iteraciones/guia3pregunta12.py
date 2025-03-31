'''Escriba un programa que muestre todos los números primos existentes entre 1 y una 
entrada n solicitada al usuario'''

# entrada
num = int(input('ingrese un numero: '))
# procesamiento

i = 1
while i <= num:
    cont = 1
    x = 0
    while cont <= i:
        if i % cont == 0:
            x += 1
        cont += 1
    if x == 2:
        print(i)
    i += 1

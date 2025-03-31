'''
Escriba un programa que reciba como entrada un número entero positivo y verifique si 
dicha entrada recibida es un número de Armstrong o no. Un número de Armstrong es un 
número de n dígitos que es igual a la suma de sus dígitos a la nava potencia. Por ejemplo:
6 = 61 = 6
371 = 33 + 73 + 13 = 371
'''
# entrada, se pide ingresar  un numero 
num = int(input("ingrese un numero: "))
sum = 0 # se inicia la variable sum
k  = num # se crea una copia de la entrada
n = len(str(num)) # se crea una variable para contar la cantidad de digitos 
while k > 0:
    digito = k % 10 # se divida la variable k en digitos
    sum += digito ** n # se eleva el digito en base a la variable n y se añade a la suma
    k //= 10 # se vuelven a juntar los digitos de la variable k mediante una division entera  
# se compara la varivle sum con la entrada
if sum == num: # si sum es igual a num se imprime que es un numero de armstrong
    print(num,' es numero de armstrong')
else: # si son distintos se imprime que no es un numero de armstrong
    print(num,'no es un numero de armstrong')
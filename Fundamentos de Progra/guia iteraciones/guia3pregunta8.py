'''
Escriba un programa que reciba como entrada un número entero positivo y verifique si 
dicha entrada es un número fuerte o no. Un número fuerte es un número que cumple la 
condición de que la suma de los factoriales de sus dígitos son iguales número original. 
Por ejemplo:
145 -> 1! + 4! + 5! = 1 + 24 + 120 = 145
'''
sum = 0
num = int(input('ingrese un numero: '))
temp = num
while (num):
    i = 1
    factorial = 1
    dig = num % 10 
    while i <= dig:
        factorial = factorial * i
        i += 1
    sum = sum + factorial
    num = num // 10
if sum == temp:
    print(temp, 'es un numero fuerte')
else:
    print(temp, ' no es un numero fuerte')



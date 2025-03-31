'''
De acuerdo con el resultado de la suma de sus divisores, los números pueden 
clasificarse como deficientes, perfectos o abundantes. 
• Un número deficiente es un número en el cuál la suma de sus divisores es menor 
al doble del número, por ejemplo 14 es un número deficiente pues: 
1 + 7 + 2 + 14 = 24 < 2 * 14 = 28 
• Un número perfecto es un número en el cuál la suma de sus divisores es igual al 
doble del número, por ejemplo 28 es un número perfecto pues: 
1 + 2 + 4 + 7 + 14 + 28 = 56 = 28 * 2 
• Un número abundante es un número en el cual la suma de sus divisores es 
mayor al doble del número, por ejemplo 12 es un número abundante pues: 
1 + 2 + 3 + 4 + 6 + 12 = 28 > 12 * 2 = 24 
Construya un programa en Python, que indique si un número es deficiente, perfecto o 
abundante.

'''
num = int(input("ingrese un numero entero: "))
div = 0
sum = 0
i = 1
while i <= num:
    if num % i == 0:
        div = i
        sum += div
    i += 1
if sum < num * 2:
    print(num, 'es un numero deficiente')
if sum == num *2:
    print(num, ' es un numero perfecto')
if sum > num * 2:
    print(num, ' es unnumero abundante')


'''
Construya un programa en Python que obtenga la raíz digital de un número entero 
positivo dado. La raíz digital corresponde al resultado de la suma de todos los dígitos del 
número y siempre corresponde a un número entre 0 y 9. 
Por ejemplo: 24589 -> 2 + 4 + 5 + 8 +9 = 28 -> 2 + 8 = 10 -> 1 + 0 = 1 
Por lo tanto, la raíz digital de 24589 es 1
'''
# entrada 
num = int(input('ingrese un numero entero: '))

while num > 9 :
    sum = 0
    while num > 0: 
        sum = sum + num % 10
        num = num // 10 
    num = sum
print(sum)

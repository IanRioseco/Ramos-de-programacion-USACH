'''
Construya un programa en Python que realice la exponenciación de dos números enteros 
como una sucesión de multiplicaciones, como, por ejemplo: 
2**5 = 2 * 2 * 2 * 2 * 2 = 32 
'''
#entrada
valor_1 = input("ingrese el primer numero: ")
valor_2 = input("ingrese el segundo valor: ")

valor_1 = int(valor_1)
valor_2 = int(valor_2)

#procesamiento
# se define el valor de inicio de la variable i
i = 0
# se define el valor de inicio de la variable resultado
resultado = 1
# mientras i sea menor a valor_2
while i < valor_2 :
    # valor_1 se multiplica con resultado y luego se guarda en la variable resultado
    resultado = valor_1 * resultado
    # se le suma 1 a la variable i
    i = i + 1
# 
print('El resultado de', valor_1, '**', valor_2, 'es', resultado)


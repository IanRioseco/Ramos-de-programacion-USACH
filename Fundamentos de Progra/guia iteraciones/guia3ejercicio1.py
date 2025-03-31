'''
Construya un programa en Python que realice la multiplicación de dos números enteros como una sucesión de sumas, por ejemplo: 
4 * 5 = 4 + 4 + 4 + 4 + 4 = 5 + 5 + 5 + 5 = 20
'''
# entrada, se pide ingresar dos numero enteros para realizar su multiplicacion 
#Entrada
numero = input("Ingrese un numero: ")
numero = int(numero)

numero2 = input("ingrese su segundo numero: " )
numero2 = int(numero2)
# PROCESO
# se define el inico de la variable i
i = 0
# se define el inico de la variable resultado
resultado = 0
# mientras i sea menos a numero2
while i < numero2 :
    # a numero se le suma resultado y luego se guarda en la variable resultado
    resultado = numero + resultado
    # se le suma 1 a la variable i
    i = i + 1
# SALIDA
# se muestra en pantalla el resultado de numero por numero2
print('El resultado de', numero, '*', numero2, 'es', resultado)

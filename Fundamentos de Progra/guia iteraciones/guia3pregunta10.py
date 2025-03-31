'''
(EJERCICIO PEP) De las matemáticas sabemos que todo número puede construirse como 
una multiplicación de números primos. Por ejemplo: 
• El número 40, puede construirse como 2 * 2 * 2 * 5 
• El número 150, puede construirse como 2 * 3 * 5 * 5 
• El número 572, puede construirse como 2 * 2 * 11 * 13 
Construya un programa en Python que reciba como entrada un número entero positivo, 
y entregue como salida la descomposición en números primos.
'''
# ENTRADA 

numero = int(input('ingrese un numero positivo: '))

# PROCESAMIENTO
numero_2 = numero
div = 2
descompocicion = str()
while numero != 1:
    if numero % div == 0:
        descompocicion += str(div)+"*"
        numero /= div
    else:
        div += 1
i = 0
descompocicion_2 = ""
while i < len(descompocicion) - 1:
    descompocicion_2 += descompocicion[i]
    i += 1
# SALIDA
print("la descompocicion de", numero_2, "es", descompocicion_2) 

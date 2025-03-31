''' 
Construya un programa en Python utilizando while que reciba como entrada dos 
números “inicio” y “final” e informe cuántos números entre ellos (considerando los 
extremos) son múltiplos de 3 o 5. Asuma que el usuario alimentará siempre el programa 
con números enteros (negativos o positivos) pero es posible que ingrese un número de 
inicio más grande que el número final. 
Por ejemplo: 
Ingrese un número de inicio: -8 
Ingrese un número de fin: 9 
Existen 8 números múltiplos de 3 o de 5
'''
#entrada se pediran dos numeros de inico y final
num_1 = input("ingrese un numero de inicio: ")
num_2 = input("ingrese un numero fin: ")
num_1 = int(num_1)
num_2 = int(num_2)

#procesamiento, se determinrada cuantos numeros
#multiplos de 3 y 5 hay entre los numeros ingresados (considerando los extremos)

i = num_1 # se impone que la variavle i parte desde el numero de inicio
xd = 0 # se crea una variavle para contavilizar los numeros que sean multiplos
while i <= num_2: # mientras la variable i sea menor o igual al numero de fin 
   if i%3 == 0 or i%5 == 0: # se verifica si los numeros son multiplos de 3 o 5
      xd+= 1 # si un mumero es multiplo se agrega a la varible xd
   i = i+1 # se le suma 1 a la variable i 
print('hay', xd ,'numeros multiplos de 3 o 5') # se entrega la cantidad de multiplos que hay entre los 
                                               # dos numeros de entrada 
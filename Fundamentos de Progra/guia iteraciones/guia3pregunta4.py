'''
construya un programa en Python utilizando while que reciba como entrada dos 
números “inicio” y “final” e indique qué números del intervalo (incluyendo los dos de 
entrada) son múltiplos simultáneamente de 2 y 7. 
Asuma que el usuario alimentará siempre el programa con números enteros (negativos 
o positivos) pero es posible que ingrese un número de inicio mayor que el número final. 
Por ejemplo: 
Ingrese un número de inicio: 24 
Ingrese un número de fin: 70 
Los números que cumplen las condiciones son: 28 42 56 70
'''
#entrada se pediran dos numeros de inico y final
num_1 = input("ingrese un numero de inicio: ")
num_2 = input("ingrese un numero fin: ")
num_1 = int(num_1)
num_2 = int(num_2)
#procesamiento, se determinrada cuantos numeros
#multiplos de 3 y 5 hay entre los numeros ingresados (considerando los extremos)
i = num_1 # se impone que la variable i parte desde el numero de inicio
# mientras i sea menor o igual a la variable num_2 
while i <= num_2:
     if i%2 == 0 and i%7 ==0:
          print(i, end=" ")
     i+=1

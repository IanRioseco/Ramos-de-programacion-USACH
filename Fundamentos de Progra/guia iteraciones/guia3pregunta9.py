'''
La sucesión de Fibonacci, es una sucesión matemática cuyos términos se obtienen 
sumando los dos números anteriores, para comenzar el cálculo se sabe que Fib(0) = 
0 y Fib(1) = 1, por lo tanto, la progresión de números de Fibonacci se da de la siguiente 
forma: 
Fib(2) = Fib(1) + Fib(0) = 1 + 0 = 1
Fib(3) = Fib(2) + Fib(1) = 1 + 1 = 2 
Fib(4) = Fib(3) + Fib(2) = 2 + 1 = 3 
Fib(5) = Fib(4) + Fib(3) = 3 + 2 = 5 
Fib(6) = Fib(5) + Fib(4) = 5 + 3 = 8
Construya un programa en Python que reciba como entrada valor “n” y entregue como 
resultado el n-ésimo número de Fibonacci, es decir, Fib(numero)
'''
# entrada
# definimos el inico de la variable a y la variable b
a = 0
b = 1 
s=0
# se pide al usuario ingresar el valor de la sucecion de fibonacci
# que desea saber 
n = int(input('ingrese el valor que desea saber de la sucecion de fibonacci: '))
# se define el inicio de la variable i
i = 1
# mientar la variabl i sea menor o igual al numero de entrada
while i <= n:
    a = b # a la variable a se le entrega el valor de b
    b = s # a la variable b se le entrega el valor de s
    s = a + b # se crea una varible en la que se guarda las suma de las variable a y b
    i += 1 # se le suma 1 ala variable i

# al ternimar el ciclo se muestra 
# en pantalla el valor de la variable s
print(s)
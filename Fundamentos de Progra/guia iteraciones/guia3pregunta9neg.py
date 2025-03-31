'''
EXTRA: Si sabemos que Fib(n) = Fib(n-1) + Fib(n-2), podríamos definir: Fib(n-2) = Fib(n) – Fib(n - 1) 
De este modo, podemos obtener el Fib() de números 
negativos, por ejemplo: 
Fib(-1) = Fib(1) – Fib(0) = 1 - 0 = 1 
Fib(-2) = Fib(0) – Fib(-1) = 0 – 1 = -1 
Fib(-3) = Fib(-1) – Fib(-2) = 1 - - 1 = 2 
Fib(-4) = Fib(-2) – Fib(-3) = -1 – 2 = -3 
Fib(-5) = Fib(-3) – Fib(-4) = 2 - - 3 = 5
'''
# entrada
a = 0
b = 1
n = int(input('ingrese el valor que desea saber de la sucecion de fibonacci: '))
i = 0
while i <+ n:
    s = a - b
    a = b
    b = s
    i += 1
print(s)
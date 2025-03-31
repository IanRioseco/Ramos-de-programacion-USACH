palabra = input('ingrese una palabra o una frase: ')
palabra = palabra.split(' ')
palabra = ''.join(palabra)
palabra = palabra.lower()
palabra_2 = ''
aux = -1
i = len(palabra)
while i > 0:
    palabra_2 += palabra[aux]
    aux -=1
    i -= 1
if palabra == palabra_2:
    print('su palabra o frase es un palindromo')
else:
    print('su palabra  o frase no es un palindromo')
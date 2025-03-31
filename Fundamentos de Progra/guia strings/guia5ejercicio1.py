p = input('ingrese una palabra: ')
p = p.lower()
vocales = 'aeiou'
consonantes = 'bcdfghjklmnpqrstvwxyz'
i = 0
voc = 0
conso = 0
while i < len(p):
    x = p[i]
    if x in vocales:
        voc += 1
    elif x in consonantes:
        conso += 1
    i += 1
print('hay', voc, 'vocales y', conso, 'consonantes en la palabra ingresada')





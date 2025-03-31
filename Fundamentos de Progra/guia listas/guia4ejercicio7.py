# ENTRADA
temp_max = list(map(float,input("Ingrese sus temperaturas, separadas por espacio: ").split(" ")))
temp_max.sort()
print(temp_max)
# PROCESAMIENTO
num = int(input('numero de temperaturas que desea: '))
aux = len(temp_max)
a = aux - num
if a < aux:
    print('las',num, 'temperaturas maximas mas altas son',temp_max[a:])

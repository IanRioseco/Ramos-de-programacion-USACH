'''
Jaime es un paisajista que se encuentra estudiando el ciclo de 
crecimiento de los pinos tropicales pues requiere saber cuánto tiempo se demorará el 
árbol en alcanzar una altura determinada. Él ha estudiado el clima de Santiago y ha 
determinado que, en nuestras condiciones climáticas, el árbol debería crecer de acuerdo 
con el siguiente patrón: 
• En primavera el árbol aumenta su tamaño en un 30%. 
• En verano el árbol aumenta su tamaño en un metro. 
• En otoño el árbol aumenta su tamaño en un 5%. 
• En invierno el árbol no crece. 
Se le solicita a usted que ayude a Jaime en la construcción de un programa que le 
permita estimar cuánto tiempo (en meses) le tomará al árbol alcanzar una altura 
determinada, teniendo en cuenta que: 
• Todos los árboles se plantan al inicio de la primavera. 
• Todos los árboles se plantan con una altura inicial de 0.5 metros. 
• Cada estación del año dura exactamente 3 meses. 
• Su función solo requiere como entrada el valor de altura que se desea alcanzar 
en metros. 
• El programa debe entregar como salida, el número de meses que le tomará al 
árbol alcanzar la altura deseada. 
• Considere que la entrada del programa siempre será un número entero positivo, 
y que para efectos de cálculo sólo se consideran las alturas al final de cada 
estación.

'''
# entrada, altura deseada
altura_deseada = input("ingrese la altura la cual desea estimar: ")
altura_deseada = int(altura_deseada)

# procesamiento
# altura inicial
medida_inicial = 0.5
# estacion inicial
estacion = "primavera"
# numero de meses inicial
meses = 0
while medida_inicial < altura_deseada :
    if estacion == "primavera":
        # se aumenta la altura en 30%
        medida_inicial = medida_inicial * 0.3 + medida_inicial
        # se aumenta el numero de meses
        meses += 3
        # al terminar la primevare, se cambia la estacion a verano
        estacion = "verano"
    elif estacion =="verano":
        # se aumenta la altura en 1 metro
        medida_inicial = medida_inicial + 1
        # aumenta el numero de meses
        meses += 3
        # al terminar el verano, se cambia a otoño
        estacion = "otoño"
    elif estacion == "otoño":
        # se aumenta la altura en 5%
        medida_inicial = medida_inicial * 0.05 + medida_inicial
        # aumenta el numero de meses
        meses += 3
        # al termino del otono, se cambuia a invierno
        estacion = "invierno"
    elif estacion == "invierno":
        # aumenta el numero de meses
        meses += 3
        # al terminar el invierno, se cambia a primavera
        estacion = "primavera"
# se entrega el numero de meses
print('los arboles plantados llegaran a la altura estimada en',meses,'meses')
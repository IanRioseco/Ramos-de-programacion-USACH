# ENTRADA, se pide ingresar los puntajes que obtuvo hanemichci
# con los cuales se crea una lista
score = list(map(int,input("Ingrese los puntajes de hanamichi,separados por espacio: ").split(" ")))
print(score)
# PROCESAMIENTO
# agrego el primer valor de la lisa el cual se 
# definira como el valor maximo de la lista
max_puntos = score[0]
# agrego el primer valor de la lista el cual se 
# definira como el valor minimo dentro de esta
min_puntos = score[0]
# defino un contador para saber cuantos valores maximos hay en la lista
cont = 0
# defino un contador para saber cuantos valores minimos hay en la lista
cont_2 = 0
# defino un iteradorpara recorrer los valores de la lista
i = 0
# mientras no se recorran todos los valores de la lista
while i < len(score):
    # si el valor de la lista es mayor 
    # al valor guardado
    if score[i] > max_puntos:
        # se remplaza el valor maximo guardado por
        # el valor maximo actual
        max_puntos = score[i]
        # incremento en 1 la variable cont
        cont += 1
    # si el valor de la lista es menor al
    # valor guardado
    if score[i] < min_puntos:
        # se remplaza el valor minimo guardado
        # por el valor minimo actual
        min_puntos = score[i]
        # incremento en 1 la variable cont_2
        cont_2 += 1
    # incremento a i en 1 para seguir iterando
    i += 1
print("Hanamichi, superaste tu mejor marca",cont, "veces durante la temporada y empeoraste tu peor marca",cont_2, "veces ")


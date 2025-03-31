def arroba (gmail):
    largo= len(gmail)
    lista=list(gmail)
    i=0
    print(lista)
    while i<largo:
        if "@" in lista:
            return True
        elif "@" not in lista:
            return False
        i=i+1
    return True
    

textoo=input("ingrese su correo electronico:")
c= arroba(textoo)

print(c)
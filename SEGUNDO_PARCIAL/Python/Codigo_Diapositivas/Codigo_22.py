lista1=[1,2,3,"Hola",True]
lista2=["Hola",1,2,4,5,False]
lista3=["Hola",1,2,4,5,False]

def listas_iguales(l1, l2):
    if len(l1) != len(l2):
        return False
    for i in range(len(l1)):
        if l1[i] != l2[i]:   
            return False
    return True

if listas_iguales(lista2, lista1):
    print("Las listas son iguales")
else:
    print("Las listas no son iguales")

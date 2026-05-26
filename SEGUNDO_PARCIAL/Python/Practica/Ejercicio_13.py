def volver_lista_positiva(*args):   
    lista_positiva=[]
    for valor in args:
        if valor>0:
         lista_positiva.append(valor)
        #elif valor==0:
         #lista_positiva.append(valor)
    return lista_positiva


def main():
    lista=[12, 35, -5, 0, 22, -11, 10, 5, -3, 1, -25, -22] 
    lista=volver_lista_positiva(*lista) 
    print(lista)

main()

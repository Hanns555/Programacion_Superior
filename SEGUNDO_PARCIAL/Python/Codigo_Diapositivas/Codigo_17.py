lista=[1,2,3,"Hola",False,True,34,"Palabra"]
print(lista)
print(len(lista))
print(lista[1:4])

#Uso de appen extend y insert

lista.append("ElementoExtra")
lista2=[2,33,1]
lista.extend(lista2)
lista.insert(1,False)

print(lista)

opcion=" "
elementos=0
lista=[]

print("Agregar elementos")
while opcion!="salir":
    print(f"La lista tiene {elementos}")
    opcion=input("Ingrese un elemnto a la lista: ")
    if opcion != "salir":       
        lista.append(opcion)
        elementos += 1
    
else:
    print("La lista generada es la siguiente: ")
    print(lista)

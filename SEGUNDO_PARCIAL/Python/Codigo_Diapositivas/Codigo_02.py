#Debemos convertir las variables al tipo de datos que queramos
#Sino python lo tomara como string

a=int(input("Ingrese el valor de a: "))
b=int(input("Ingrese el valor de b: "))

suma=a+b

print(f"La suma de a y b es {suma}")

print(type(a))
print(type(b))
print(type(suma))

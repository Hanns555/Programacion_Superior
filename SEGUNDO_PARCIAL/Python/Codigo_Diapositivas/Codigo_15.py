import random

print("ADIVINE EL NUMERO")
intentos=0
numero_generado=random.randrange(0,11)
print(numero_generado)
while intentos<3:
    print(f"Tienes {3-intentos} intentos")
    numero=int(input("Ingrese un numero: "))
    if numero==numero_generado:
     print("Adivinaste el numero")
     print(f"El numero era {numero_generado}")
     print(f"Intentos tomados: {intentos+1}")
     break
    elif numero<numero_generado:
     print(f"El numero es mas grande")
     intentos+=1
    elif numero>numero_generado:
     print(f"El numero es mas bajo")
     intentos+=1
 
else: 
 print("Intentos acabados")
 print(f"El numero era {numero_generado}")

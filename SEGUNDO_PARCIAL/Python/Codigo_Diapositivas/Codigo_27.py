#Definimos una funcion
def Funcion():
    print("Soy una funcion")
def Suma(num1,num2):
    suma=num1+num2
    print(suma)

#Funciones con retorno
def SumaR(num1,num2):
    suma=num1+num2
    return suma    
#Llamamos una funcion
Funcion()
Suma(3,5)
print(SumaR(3,5))

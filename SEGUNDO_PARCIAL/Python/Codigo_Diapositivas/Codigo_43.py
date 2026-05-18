from abc import ABC, abstractmethod

class Calculadora(ABC):
    def __init__(self):
        self.Argumento1=0
        self.Argumento2=0
        self.Resultado=0
    def Pedir_Valores(self):
     try:
        self.Argumento1=float(input("Ingrese un numero a: "))
        self.Argumento2=float(input("Ingrese un numero b: "))
     except ValueError:
        print("La calculadora solo acepta numero") 
    @abstractmethod 
    def Suma(self,Argumento1,Argumento2):
        pass
    def Resta(self,Argumento1,Argumento2):
        pass
    def Producto(self,Argumento1,Argumento2):
        pass
    def Division(self,Argumento1,Argumento2):
        pass

class Metodos_Calculadora(Calculadora):
    def __init__(self):
        super().__init__()
    def Pedir_Valores(self):
        super().Pedir_Valores()
    def Suma(self,Argumento1,Argumento2):
        self.resultado=Argumento1+Argumento2
        print(f"La suma es: {self.resultado}")
    def Resta(self,Argumento1,Argumento2):
        self.resultado=Argumento1-Argumento2
        print(f"La resta es: {self.resultado}")
    def Producto(self,Argumento1,Argumento2):
        self.resultado=Argumento1*Argumento2
        print(f"El producto es: {self.resultado}")
    def Division(self,Argumento1,Argumento2):
        try:
            self.resultado=Argumento1/Argumento2
            print(f"La division es: {self.resultado}")
        except ZeroDivisionError:
            print("No se puede dividir entre cero")

def Menu_Calculadora():
    Calcu=Metodos_Calculadora()
    while True:
     try:
        print(20*"===")
        print(10*"  "+"MENU CALCULADORA")
        print(20*"===")
        print("1. Sumar")
        print("2. Restar")
        print("3. Producto")
        print("4. Division")
        print("0. Salir")
        opcion=input("Seleccione una opcion: ")
        if opcion=="0" or opcion.lower()=="salir":
         print("Saliendo")
         break
        elif opcion=="1" or opcion.lower()=="sumar":
         Calcu.Pedir_Valores()
         Calcu.Suma(Calcu.Argumento1,Calcu.Argumento2)
        elif opcion=="2" or opcion.lower()=="restar":
         Calcu.Pedir_Valores()
         Calcu.Resta(Calcu.Argumento1,Calcu.Argumento2)
        elif opcion=="3" or opcion.lower()=="producto":
         Calcu.Pedir_Valores()
         Calcu.Producto(Calcu.Argumento1,Calcu.Argumento2)
        elif opcion=="4" or opcion.lower()=="division":
         Calcu.Pedir_Valores()
         Calcu.Division(Calcu.Argumento1,Calcu.Argumento2)
        else:
         print("Opcion No valida")
     except KeyboardInterrupt:
        print("\n")
        respuesta=input("Desea salir del programa(s/n): ")
        if respuesta=="s":
         break

        
Menu_Calculadora()

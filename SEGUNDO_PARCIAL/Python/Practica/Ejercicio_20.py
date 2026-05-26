class NumeroZero(Exception):
     def __init__(self, mensaje):
        self.mensaje = mensaje
        super().__init__(self.mensaje)

class Calculadora:
    def __init__(self):
        self.numero1=-1
        self.numero2=-1

    def Programa(self):
     while True:
        try:
            self.numero1=int(input("Ingrese un numero 1: "))
            if self.numero1==0:
                raise NumeroZero("Ingrese numero mayo a 0")
            self.numero2=int(input("Ingrese un numero 2: "))
            if self.numero2==0:
                raise NumeroZero("Ingrese numero mayo a 0")
            break
        except ValueError:
         print("No se aceptan caracteres")
        except NumeroZero:
         print("Ingrese numero mayo a 0")

    def Suma(self):
        return self.numero1+self.numero2 

    def Resta(self):
        return self.numero1-self.numero2

    def Producto(self):
        return self.numero1*self.numero2

    def Division(self):
        return self.numero1/self.numero2   


def Menu():
    Maquina=Calculadora()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Ingresar Numeros")
        print("2. Sumar")
        print("3. Restar")
        print("4. Producto")
        print("5. Dividir")
        print("6. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion=="6" or opcion.lower()=="salir":
            break
        elif opcion=="1":
            Maquina.Programa()
        elif opcion=="2":
            print("La suma es: ",Maquina.Suma())
        elif opcion=="3":
            print("La resta es: ",Maquina.Resta())
        elif opcion=="4":
            print("El producot es: ",Maquina.Producto())
        elif opcion=="5":
            print("La division es: ",Maquina.Division())
        else:
            print("Opcion Invalida")

Menu()

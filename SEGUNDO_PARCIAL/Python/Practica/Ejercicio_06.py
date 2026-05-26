from  abc import ABC, abstractmethod

class numero(ABC):
    def __init__(self):
        self.parte_entera=0
        self.numero=0
    @abstractmethod
    def CrearNumero(self):
        pass
    def MostrarNumero(self):
        pass

class Numero_Entero(numero):
    def __init__(self):
        super().__init__()
    def CrearNumero(self):  
        while True:
         try: 
            self.parte_entera=input("Ingrese el valor del numero a crear: ")
            self.numero=int(self.parte_entera)
            break
         except ValueError:
            print("Un numero entero no acepta caracteres intente de nuevo")
        
    def MostrarNumero(self):
        print(f"El numero creado es: {self.numero}")
        print(type(self.numero))    
    
class Numero_Decimaal(numero):
    def __init__(self):
        super().__init__()
        self.parte_decimal=0

    def CrearNumero(self):  
        while True:
         try:
            self.parte_entera=input("Ingrese la parte entera: ")
            self.parte_decimal=input("Ingrese la parte decimal: ")
            creacion=self.parte_entera+"."+self.parte_decimal
            self.numero=float(creacion)
            return self.numero
         except ValueError:
            print("Los numeros no continen caracteres intente de nuevo")

    def MostrarNumero(self):
        print(f"El numero creado es: {self.numero}")
        print(type(self.numero))  

class Numero_Complejo(Numero_Decimaal):
    def __init__(self):
        super().__init__()
        self.ParteReal=0
        self.ParteImaginaria=0
        
    def CrearNumero(self): 
        print("Parte Real") 
        self.ParteReal=super().CrearNumero()
        print("Parte Imaginaria")
        self.ParteImaginaria=super().CrearNumero()
        creacion=f"{self.ParteReal}+{self.ParteImaginaria}j"
        self.numero=complex(creacion)

    def MostrarNumero(self):
        print(f"El numero creado es: {self.numero}")
        print(type(self.numero))

def Menu_Numeros():
    while True:
     try:
        print(20*"=")
        print(7*" "+"Menu")
        print(20*"=")
        print("1. Numeros Enteros")
        print("2. Numeros Decimales")
        print("3. Numeros Complejos")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion=="0" or opcion.lower()=="salir":
            break
        elif opcion=="1" or opcion.lower()=="numeros enteros": 
            entero=Numero_Entero()
            entero.CrearNumero()
            entero.MostrarNumero()
        elif opcion=="2" or opcion.lower()=="numeros decimales":
            decimal=Numero_Decimaal()
            decimal.CrearNumero()
            decimal.MostrarNumero()
        elif opcion=="3" or opcion.lower()=="numeros complejos":
            complejo=Numero_Complejo()
            complejo.CrearNumero()
            complejo.MostrarNumero()
        else:
            print("Opcion Invalida")
     except KeyboardInterrupt:
        print("\nPrograma Cerrado Forzosamente")   
        break    
    
Menu_Numeros()

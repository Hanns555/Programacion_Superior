from abc import ABC, abstractmethod

class Lector(ABC):
    def __init__(self):
        self.archivo=""

    @abstractmethod
    def Leer_Archivo(self):
        pass
    def Mostrar_Contenido(self):
        pass

class Archivo(Lector):
    def __init__(self):
        super().__init__()

    def Leer_Archivo(self):
        try:
         self.archivo=input("Ingrese el nombre del archivo: ")
         with open(self.archivo,"r") as file:
             print(f"Archivo {self.archivo} Leido con exito")
        except Exception as e:
            print(f"El archivo no puede ser abierto error: {e}")
    def Mostrar_Contenido(self):
        try:
         with open(self.archivo,"r") as file:
          for line in file:
            print(line, end="")
          print("\n")
        except Exception as e:
           print(f"El archivo no puede ser abierto error: {e}")

def Menu():
    MiArchivo=Archivo()
    while True:
        print("1. Leer Archivo ")
        print("2. Mostrar Contenido ")
        print("0. Salir")
        opcion=input("Ingrese una opcion a realizar: ")
        if opcion=="0" or opcion.lower()=="salir":
            print("Saliendo")
            break
        elif opcion=="1" or opcion.lower()=="leer archivo":
            MiArchivo.Leer_Archivo()
        elif opcion=="2" or opcion.lower()=="mostrar contenido":
            MiArchivo.Mostrar_Contenido()
        else:
            print("Opcion Invalida")
Menu()

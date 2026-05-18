from abc import ABC, abstractmethod

class Lector(ABC):
    def __init__(self):
        self.archivo=""

    @abstractmethod
    def Contador_Palabras(self):
        pass
    def Contador_Vocales(self):
        pass
    def Contador_SignosPuntuacion(self):
        pass
    def Buscar_Palabra(self):
        pass
    def FinalizarRevision(self):
        pass

class Archivo_Editor(Lector):
    def __init__(self):
        super().__init__()

    def Pedir_Archivo(self):
        try:
            self.archivo=input("Ingrese el nombre del archivo: ")
            with open(self.archivo,"r", encoding="utf-8") as file:
                print("El archivo se logro leer con exito")
        except Exception as e:
         print(f"Archivo no se logro abrir, error: {e}")
    def Contador_Palabras(self):
        contador = 0
        file = open(self.archivo, "r", encoding="utf-8")
        lineas = file.readlines()
        file.close()                       
        for line in lineas:
            palabras = line.split()        
            contador += len(palabras)      
        print(f"La cantidad de palabras en {self.archivo} son: {contador}")
    def Contador_Vocales(self):
        contador=0
        with open(self.archivo,"r", encoding="utf-8") as file:
            lineas=file.readlines()
        for line in lineas:
            for char in line:
                if char.lower() in "aeiou":
                    contador+=1
        print(f"La cantidad de vocales en {self.archivo} son: {contador}")
    def Buscar_Palabra(self):
        contador=0
        palabra=input("Ingrese una palabra a buscar: ")
        with open(self.archivo,"r", encoding="utf-8") as file:
            lineas=file.readlines()
        for line in lineas:
            palabras=line.split()
            contador += palabras.count(palabra) 
        print(f"La cantidad de la palabra {palabra} en {self.archivo} son: {contador}")
    def Contador_SignosPuntuacion(self):
        contador = 0
        signos = ".,;:!?¡¿-()[]{}\"'…"  
        with open(self.archivo, "r", encoding="utf-8") as file:
            lineas = file.readlines()
        for line in lineas:
            for char in line:
                if char in signos:
                    contador += 1
        print(f"La cantidad de signos de puntuacion en {self.archivo} son: {contador}")
    def FinalizarRevision(self):
        with open(self.archivo,"a", encoding="utf-8") as file:
            file.write("Archivo evaluado correctamente\n")
        print("Linea agregada al archivo")
        with open(self.archivo,"r", encoding="utf-8") as file:
            lineas=file.readlines()
        for line in lineas:
            print(line, end="")

def Preguntar():
    while True:
        print("Revisar Otro Archivo (s/n): ")
        respuesta=input()
        if respuesta=="s":
            return True
        elif respuesta=="n":
            return False
        else:
            print("Opcion No Valida")

def Menu():
    Operacion=True
    while Operacion:
     try:
        Editor=Archivo_Editor()
        Editor.Pedir_Archivo()
        while True:
            print(9*"===")
            print(11*" "+"Menu")
            print(9*"===")
            print("1. Contar Palabras")
            print("2. Contar Vocales")
            print("3. Contar SignosPuntuacion")
            print("4. Buscar Palabra")
            print("5. Finalizar Revision")
            print("0. Salir")
            opcion=input("Ingrese una opcion: ")
            if opcion=="5" or opcion=="Finalizar Revision":
                Editor.FinalizarRevision()
                break
            elif opcion=="1" or opcion=="Contar Palabras":
                Editor.Contador_Palabras()
            elif opcion=="2" or opcion=="Contar Vocales":
                Editor.Contador_Vocales()
            elif opcion=="3" or opcion=="Contar SignosPuntuacion":
                Editor.Contador_SignosPuntuacion()
            elif opcion=="4" or opcion=="Buscar Palabra":
                Editor.Buscar_Palabra()
            elif opcion=="0" or opcion=="Salir":
                print("SALIENDO")
                break
            else: 
                print("Opcion No Valida")
        Operacion=Preguntar()
     except FileNotFoundError:
        print("Error: FileNotFoundError")
        Operacion=Preguntar()
     except KeyboardInterrupt:
        print("\n Error: KeyboardInterrupt")
        Operacion=Preguntar()
     

Menu()

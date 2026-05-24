class Archivo:
    def __init__(self):
        self.nombre=""

    def Crear_Archivo(self,modo):
        with open(self.nombre,modo) as file:
            print("Archivo creado con python")
            print("Archivo creado con exito")
            
    def Editar_Archivo(self,modo):
        with open(self.nombre,modo) as file:
            for nro_linea in range(5):
                linea=input(f"Ingrese la linea {nro_linea+1} al archivo {self.nombre}: ")
                linea=linea+"\n"
                file.write(linea)
            print("Lineas agregadas al archivo con exito")

    def Mostrar_Contenido(self,modo):
        with open(self.nombre,modo) as file: 
            lineas=file.readlines()
            for linea in lineas:
                print(linea,end="")
    
                
    def Pedir_Datos(self):
        self.nombre=input("Ingrese el nombre del Archivo: ")


def Menu_Archivos():
    File=Archivo()
    Detener=True
    while Detener:
        try:
            print(15*"=")
            print(5*" "+"Menu")
            print(15*"=")
            print("1. Crear Archivo")
            print("2. Agregar texto")
            print("0. Salir")
            opcion=input("Ingrese una opcion: ")
            if opcion=="0"or opcion.lower()=="salir":
                print("Saliendo")
                break
            elif opcion=="1"or opcion.lower()=="crear archivo":
                File.Pedir_Datos()
                File.Crear_Archivo("x")
            elif opcion=="2"or opcion.lower()=="agregar texto":
                File.Editar_Archivo("a")
                print("")
                print("Contenido del Archivo")
                File.Mostrar_Contenido("r")
                print("")
            else:
                print("Opcion Invalida")
        except KeyboardInterrupt:
            print(f"\n El programa se detuvo por el usuario")
            Detener=False
        except FileExistsError:
            print(f"El archivo '{File.nombre}' ya existe, elige otro nombre")
        except FileNotFoundError:
            print(f"El archivo '{File.nombre}' no existe, crealo primero")
        except Exception as e:
            print(f"\n El programa se detuvo de repente por {e} \n")
            while True:
                print("1. Continuar")
                print("2. Salir")
                opcion=input("Elegir una opcion: ")
                if opcion=="2" or opcion.lower()=="salir":
                    break
                elif opcion=="1" or opcion.lower()=="continuar":
                    Detener=True
                    break
                else:
                    print("Opcion invalida")
        
Menu_Archivos()

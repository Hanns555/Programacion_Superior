import os
class produccion_vehiculo:
    def __init__(self):
        self.__Ensambladodelcuerpo=0
        self.__FabricadoMateriales=0
        self.__Ensambladoypruebamotor=0
        self.__Armadopanel=0
        self.__Instalaciónsistemahidráulico=0
        self.__Armadofinalauto=0
        self.nombre=""

    def Registrar_Tiempos_Produccion(self):
        while True:
         try:
            self.__Ensambladodelcuerpo=float(input("Ingrese el tiempo del ensamblado del cuerpo: "))
            break
         except ValueError:
            print("No se aceptan caracteres")
        while True:
         try:
            self.__FabricadoMateriales=float(input("Ingrese el tiempo del fabricado de llantas, vidrios, etc: "))
            break
         except ValueError:
            print("No se aceptan caracteres")
        while True:
         try:
            self.__Ensambladoypruebamotor=float(input("Ingrese el tiempo del ensamblado y prueba del motor: "))
            break
         except ValueError:
            print("No se aceptan caracteres")
        while True:
         try: 
            self.__Armadopanel=float(input("Ingrese el tiempo del armado de panel táctil: "))
            break
         except ValueError:
            print("No se aceptan caracteres")
        while True:
         try:
            self.__Instalaciónsistemahidráulico=float(input("Ingrese el tiempo del instalación de sistema hidráulico: "))
            break
         except ValueError:
            print("No se aceptan caracteres")
        while True:
         try:
            self.__Armadofinalauto=float(input("Ingrese el tiempo del armado final del auto: "))
            break
         except ValueError:
            print("No se aceptan caracteres")

    def MostrarTiempos(self):
        print("Tiempo de Ensamblado de Cuerpo: ",self.__Ensambladodelcuerpo)
        print("Tiempo de fabricado de llantas,vidrios,etc: ",self.__FabricadoMateriales) 
        print("Tiempo de ensamblado y prueba del motor: ",self.__Ensambladoypruebamotor)
        print("Tiempo de armado de panel tactil: ",self.__Armadopanel) 
        print("Tiempo de instalacion de sistema hidraulico: ",self.__Instalaciónsistemahidráulico) 
        print("Tiempo de armado final del auto: ",self.__Armadofinalauto)
    
    def Guardar_Datos_Tiempo(self):
        while True:
            opcion=input("Guardar Datos (s/n): ")
            if opcion.lower()=="s" or opcion.lower()=="si":
             while True:
                try:
                    self.nombre=input("Ingrese el nombre del vehiculo: ")
                    with open(f"{self.nombre}.txt","x") as file:
                        file.write(f"Ensamblado del cuerpo: {self.__Ensambladodelcuerpo}\n")
                        file.write(f"Fabricado de llantas, vidrios, etc.: {self.__FabricadoMateriales}\n")
                        file.write(f"Ensamblado y prueba del motor: {self.__Ensambladoypruebamotor}\n")
                        file.write(f"Armado de panel táctil: {self.__Armadopanel}\n")
                        file.write(f"Instalación de sistema hidráulico: {self.__Instalaciónsistemahidráulico}\n")
                        file.write(f"Armado final del auto: {self.__Armadofinalauto}\n")
                    print(f"Se guardaron los datos en {os.path.abspath(f'{self.nombre}.txt')}")
                    break
                except FileExistsError:
                    print("El nombre del archivo ya existe ingrese otro nombre")
             break
            elif opcion.lower()=="n" or opcion.lower()=="no":
                print("No se guardaron los tiempos de operacion")
                break
            else:
                print("Opcion Invalida")

def Menu():
    RegistroTiempos=produccion_vehiculo()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Registrar Tiempos")
        print("2. Mostrar Datos Ingresados")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion=="0":
            break
        elif opcion=="1" or opcion.lower()=="registrar tiempos":
            RegistroTiempos=produccion_vehiculo()
            RegistroTiempos.Registrar_Tiempos_Produccion()
            RegistroTiempos.Guardar_Datos_Tiempo()
        elif opcion=="2" or opcion.lower()=="mostrar datos ingresados":
            RegistroTiempos.MostrarTiempos()
        else:
            print("Opcion Invalida")

Menu()

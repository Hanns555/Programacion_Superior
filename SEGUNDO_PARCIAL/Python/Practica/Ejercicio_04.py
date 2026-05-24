class Lista_Verificacion:
    def __init__(self):
        self.Lista=[]

    def Verificar(self):
        intcontador=0
        strcontador=0
        for elemento in self.Lista:
            if type(elemento)==type("XD"):
                strcontador+=1
            elif type(elemento)==type(1):
                intcontador+=1
        else:
            if intcontador==len(self.Lista):
                print("Lista de Enteros")
            elif strcontador==len(self.Lista):
                print("Lista de Strings")
            else:
                print("Lista Mixta")
            
    def IngresarDatos(self):
        self.Lista=[]
        while True:
         try:
            cantidad=int(input("Ingrese la cantidad de elementos: "))
            for elemento in range(cantidad):
                try:
                 dato=input(f"Elemento {elemento+1}: ")
                 self.Lista.append(int(dato))
                except ValueError:
                 self.Lista.append(dato)
            break
         except ValueError:
            print("Solo se aceptan numeros enteros")
         except KeyboardInterrupt:
            print("\nCierre Forzoso")
            break

    def MostrarLista(self):
        print("Elementos Lista")
        for elemento in self.Lista:
            print(f"Elemento {elemento}, Tipo de Dato : {type(elemento)}")
                
def Menu():
    try:
        List=Lista_Verificacion()
        while True:
            print(20*"=")
            print(7*" "+"MENU")
            print(20*"=")
            print("1. Ingresar Datos")
            print("2. Mostrar Lista")
            print("0. Salir")
            opcion=input("Ingrese una opcion: ")
            if opcion=="0" or opcion.lower()=="salir":
                print("Saliendo")
                break
            elif opcion=="1" or opcion.lower()=="ingresar datos":
                List.IngresarDatos()
                List.Verificar()
            elif opcion=="2" or opcion=="mostrar lista":
                List.MostrarLista()
            else:
                print("Opcion Inavlida")
    except KeyboardInterrupt:
        print("\nCierre Forzoso")
        
Menu()

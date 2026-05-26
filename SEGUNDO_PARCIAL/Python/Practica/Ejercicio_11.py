class Instagram:
    def __init__(self):
        self.nombre="Instagram"
        self.version="3.12.4"
        self.cantidadusuarios=0
    
    def MostrarInformacion(self):
        print(f"{self.nombre}: {self.version}v")
        print(f"Cantidad de Usuarios: {self.cantidadusuarios}")

    def ActualizarCantidadUsuarios(self,usuarios):
        self.cantidadusuarios=usuarios
     

class UsuariosInstagram(Instagram):
    def __init__(self):
        self.usuario=""
        self.__pais=""
        
    def CrearUsuario(self):
        self.usuario=input("Ingres el nombre del usuario: ")
        self.__pais=input("Ingrese el pais: ")

    def obtener_pais(self):            
        return self.__pais
        
    def PaisUsuarios(self, lista):      
        paises = []
        for usuario in lista:
            paises.append(usuario.obtener_pais()) 
        if paises:
            pais_mayor = max(paises, key=paises.count)
            print(f"Pais con mas usuarios: {pais_mayor}")
            print(f"Cantidad: {paises.count(pais_mayor)}")
    

def Menu():
    Usuarios=[]
    App=Instagram()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Info App")
        print("2. Usuarios Instagram")
        print("3. Pais con mas usuarios")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion.lower()=="0":
            break
        elif opcion.lower()=="info app" or opcion.lower()=="1":
            App.MostrarInformacion()
        elif opcion.lower()=="usuarios instagram" or opcion.lower()=="2":
            Persona=UsuariosInstagram()
            Persona.CrearUsuario()
            Usuarios.append(Persona)
            App.ActualizarCantidadUsuarios(len(Usuarios))
        elif opcion == "3" or opcion.lower() == "pais con mas usuarios":
            if Usuarios:
                Persona.PaisUsuarios(Usuarios)   
            else:
                print("No hay usuarios registrados")
        else:
            print("Opcion Invalida")


Menu()









        

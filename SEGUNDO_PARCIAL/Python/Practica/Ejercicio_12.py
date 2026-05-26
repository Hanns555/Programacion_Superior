from abc import ABC,abstractmethod

class red_social(ABC):
    @abstractmethod
    def MostrarInformacion(self):
        pass
    @abstractmethod
    def FormatoMultimedia(self):
        pass


class Instagram(red_social):
    def __init__(self):
        self.nombre="Instagram"
        self.version="3.12.4"
        self.formatomultimedia=["videos","publicaciones","fotos"]
        self.cantidadusuarios=0
    
    def MostrarInformacion(self):
        print(f"{self.nombre}: {self.version}v")
        print(f"Cantidad de Usuarios: {self.cantidadusuarios}")

    def FormatoMultimedia(self):
         print(f"Formatos Multimedia de {self.nombre} son: ")
         for formato in self.formatomultimedia:
            print(formato)
                
    def ActualizarCantidadUsuarios(self,usuarios):
        self.cantidadusuarios=usuarios
     
class UsuariosInstagram(Instagram):
    def __init__(self):
        super().__init__()
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

class Facebook(red_social):
       def __init__(self):
           self.nombre="Facebook"
           self.version="2.25.2"
           self.cantidadusuarios=45000
           self.formatomultimedia=["videos","publicaciones","fotos"]
           self.ultimoformato=""
    
       def MostrarInformacion(self):
        print(f"{self.nombre}: {self.version}v")
        print(f"Cantidad de Usuarios: {self.cantidadusuarios}") 

       def FormatoMultimedia(self):
         print(f"Formatos Multimedia de {self.nombre} son: ")
         for formato in self.formatomultimedia:
            print(formato)

       def AniadirFormatoMultimedia(self):
            self.ultimoformato=input("Ingrese le nuevo formato multimedia de la app: ")
            self.formatomultimedia.append(self.ultimoformato)
            print(f"La app soporta ahora: {self.ultimoformato}")

class YouTube(red_social):
       def __init__(self):
           self.nombre="Youtube"
           self.version="47.45.2"
           self.cantidadusuarios=2001125
           self.formatomultimedia=["videos","publicaciones"]
           self.__monetizacion=1200
    
       def MostrarInformacion(self):
        print(f"{self.nombre}: {self.version}v")
        print(f"Cantidad de Usuarios: {self.cantidadusuarios}") 

       def FormatoMultimedia(self):
         print(f"Formatos Multimedia de {self.nombre} son: ")
         for formato in self.formatomultimedia:
            print(formato)

       def ActualizarMonetizacion(self):
            self.__monetizacion=float(input("Ingrese la nueva monetizacion: "))
            print(f"La monetizacion es ahora: {self.__monetizacion}")



def MenuInstagram():
    Usuarios=[]
    AppInstagram=Instagram()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Info App")
        print("2. Usuarios Instagram")
        print("3. Pais con mas usuarios")
        print("4. Mostrar Formatos Multimedia")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion.lower()=="0":
            break
        elif opcion.lower()=="info app" or opcion.lower()=="1":
            AppInstagram.MostrarInformacion()
        elif opcion.lower()=="usuarios instagram" or opcion.lower()=="2":
            Persona=UsuariosInstagram()
            Persona.CrearUsuario()
            Usuarios.append(Persona)
            AppInstagram.ActualizarCantidadUsuarios(len(Usuarios))
        elif opcion == "3" or opcion.lower() == "pais con mas usuarios":
            if Usuarios:
                Persona.PaisUsuarios(Usuarios)   
            else:
                print("No hay usuarios registrados")
        elif opcion.lower()=="mostrar formatos multimedia" or opcion.lower()=="4":
            AppInstagram.FormatoMultimedia()
        else:
            print("Opcion Invalida")

def MenuFacebook():
    AppFacebook=Facebook()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Info App")
        print("2. Mostrar Formatos Multimedia")
        print("3. AniadirFormatoMultimedia")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion.lower()=="0":
            break
        elif opcion.lower()=="info app" or opcion.lower()=="1":
            AppFacebook.MostrarInformacion()
        elif opcion.lower()=="mostrar formatos multimedia" or opcion.lower()=="2":
            AppFacebook.FormatoMultimedia()
        elif opcion == "3" or opcion.lower() == "aniadirformatomultimedia":
            AppFacebook.AniadirFormatoMultimedia()
        else:
            print("Opcion Invalida")


def MenuYouTube():
    AppYoutube=YouTube()
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Info App")
        print("2. Mostrar Formatos Multimedia")
        print("3. Actualizar Monetizacion")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion.lower()=="0":
            break
        elif opcion.lower()=="info app" or opcion.lower()=="1":
            AppYoutube.MostrarInformacion()
        elif opcion.lower()=="mostrar formatos multimedia" or opcion.lower()=="2":
            AppYoutube.FormatoMultimedia()
        elif opcion == "3" or opcion.lower() == "actualizar monetizacion":
            AppYoutube.ActualizarMonetizacion()
        else:
            print("Opcion Invalida")


def MenuPrincipal():
    while True:
        print(20*"=")
        print(7*" "+"MENU")
        print(20*"=")
        print("1. Instagram")
        print("2. Facebook")
        print("3. Youtube")
        print("0. Salir")
        opcion=input("Selecione una opcion: ")
        if opcion.lower()=="salir" or opcion.lower()=="0":
            break
        elif opcion.lower()=="instagram" or opcion.lower()=="1":
            MenuInstagram()
        elif opcion.lower()=="facebook" or opcion.lower()=="2":
            MenuFacebook()
        elif opcion == "3" or opcion.lower() == "youtube":
            MenuYouTube()
        else:
            print("Opcion Invalida")


MenuPrincipal()

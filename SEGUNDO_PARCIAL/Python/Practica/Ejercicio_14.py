class EdadError(Exception):
    def __init__(self,mensaje):
        self.mensaje=mensaje
        super().__init__(self.mensaje)

class PromedioError(Exception):
    def __init__(self,mensaje):
        self.mensaje=mensaje
        super().__init__(self.mensaje)

class Estudiantes:
    def __init__(self):
        self.nombre=""
        self.edad=0
        self.carrera=""
        self.semestre=0
        self.__promedionotas=0

    def RegistrarEstudiantes(self):
        self.nombre=input("Ingrese el nombre del estudiante: ")
        while True:
            try: 
             self.edad=int(input("Ingrese la edad del estudiante: "))
             if self.edad<=0:
              raise EdadError("La edad no puede ser negativa") 
             break
            except ValueError:
             print("No se aceptan caracteres")
            except EdadError:
             print("Edad No negativa")
        self.carrera=input("Ingrese la carrera del estudiante: ")
        while True:
            try: 
             self.semestre=int(input("Ingrese el semestre del estudiante: "))
             break
            except ValueError:
             print("No se aceptan caracteres")
        while True:
           try: 
            self.__promedionotas=float(input("Ingrese el promedio del estudiante: "))
            if self.__promedionotas<0:
              raise PromedioError("El promedio no puede ser negativa")
            break
           except ValueError:
            print("No se aceptan caracteres")
           except PromedioError:
            print("Promedio no puede ser menor a 0")

    def MostrarDatosEstudiante(self):
        print("Nombre: ",self.nombre)
        print("Edad: ",self.edad)
        print("Carrera: ",self.carrera)
        print("Semestre: ",self.semestre)
        print("Promedio: ",self.__promedionotas)
    

def CrearEstudiante():
    ListaEstudiante=[]
    while True:
        try:
            nroestudiantes=int(input("Ingrese la cantidad de estudiantes a registrar: "))
            for x in range(nroestudiantes):
                Universitario=Estudiantes()
                Universitario.RegistrarEstudiantes()
                ListaEstudiante.append(Universitario)  
            break
        except ValueError:
            print("no acepta caraacteres")
    return ListaEstudiante    
    

def MostrarEstudiantes(*args):
    for Estudiante,i in zip(args,range(len(args))):
        print(15*"=")
        print(f"Estudiante {i+1}")
        Estudiante.MostrarDatosEstudiante()
        


ListaEstudiante=CrearEstudiante()
MostrarEstudiantes(*ListaEstudiante)
    

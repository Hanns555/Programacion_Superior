class Persona:
    # __init__ es el contructor en Python
    #self es como this en Python
    def __init__(self,name,edad):
        self.edad=edad
        self.name=name
        print("Soy una persona")

    def nombre(self):
        print(f"Mi nombre es {self.name}")
        return(self.name)

class Estudiante(Persona):
#Atributos y Constructor
    def __init__(self,name,edad,carrera,semestre):
        Persona.__init__(self,name,edad)
        self.carrera=carrera
        self.semestre=semestre
        
    def textoEstudinte(self):
        print(f"Soy {Persona.nombre(self)} y soy un estudiante")
        print(self.name)

        print(super().nombre())

    def infoEstudiante(self):
        print(f"Estudio {self.carrera} en {self.semestre} semestre")
    
objEstudiante=Estudiante("Xavier",25,"Mecatronica",5)
objEstudiante.nombre()
objEstudiante.infoEstudiante()
objEstudiante.textoEstudinte()

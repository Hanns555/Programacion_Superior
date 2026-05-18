class Persona:
    # __init__ es el contructor en Python
    #self es como this en Python
    def __init__(self,name,edad):
        self.edad=edad
        self.name=name
        print("Soy una persona")

    def nombre(self):
        print(f"Mi nombre es {self.name}")

objetoPersona=Persona("Xavier",25)
#Usamos los metodos de persona
objetoPersona.nombre()
#Podemos acceder al atributo
print(objetoPersona.edad)    

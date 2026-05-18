class Base:
    def __init__(self):
        self._prot=2
        self.__priv=3

    def texto(self):
        print("Este es el texto base")

    def accesoPriv(self):
        print(f"El valor privado es {self.__priv}")    

class Hija(Base):
    def __init__(self):
        Base.__init__(self)
    def texto(self):
        print("Nuevo Texto Modificado")

    def accesoProt(self):
        print(f"El valor protegido es {self._prot}")

obj1=Base()
obj2=Hija()        

obj1.texto()
obj2.texto()

obj1.accesoPriv()
obj2.accesoProt()

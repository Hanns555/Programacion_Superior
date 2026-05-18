from abc import ABC, abstractmethod

class Abstracta(ABC): #Creamos Clase Abstracta
    def Metodo1(self):
        print("Soy un metodo")  
    @abstractmethod
    def MetodoAbstracto(self):
        pass

class Normal(Abstracta):
    def MetodoAbstracto(self):
        print("Soy otro metodo")

obj= Normal()
obj.Metodo1()
obj.MetodoAbstracto()        

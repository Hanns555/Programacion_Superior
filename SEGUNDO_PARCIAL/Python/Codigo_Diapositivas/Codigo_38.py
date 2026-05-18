from abc import ABC, abstractmethod

class Transporte(ABC):
    def __init__(self,distancia):
        self.edad=0
        self.sentado=False
        self.distancia=distancia

    @abstractmethod
    def calcular_tarifa(self,distancia):
        pass

class Bus(Transporte):
    def __init__(self,distancia):
        super().__init__(distancia)

    def calcular_tarifa(self,distancia):
        tarifa=5
        self.edad=int(input("Ingrese la edad del pasajero: "))
        print("""1. Pasajero sentado
2. Pasajero parado""")
        sentado=input("Ingrese el estado del pasajero: ")
        if sentado.lower()=="sentado" or sentado=="1":
            self.sentado=True
        else:
            self.sentado=False
        if self.edad<18:
            tarifa=tarifa-(0.1*tarifa)
        if self.sentado:
            tarifa=tarifa+(0.2*tarifa)
        else:
            tarifa=tarifa-(0.1*tarifa)
        if self.distancia>100:
            tarifa=tarifa+(0.2*tarifa)
        print(f"La tarifa para el pasajero es de: {tarifa}Bs")

class Taxi(Transporte):
    def __init__(self,distancia):
        super().__init__(distancia)

    def calcular_tarifa(self,distancia):
        tarifa=10
        self.edad=int(input("Ingrese la edad del pasajero: "))
        self.sentado=True
        tarifa=tarifa+(0.2*tarifa)
        if self.edad<18:
            tarifa=tarifa-(0.2*tarifa)
        if self.distancia>100:
            tarifa=tarifa+(0.2*tarifa)
        print(f"La tarifa para el pasajero es de: {tarifa}Bs")

class Tren(Transporte):
    def __init__(self,distancia):
        super().__init__(distancia)

    def calcular_tarifa(self,distancia):
        tarifa=8
        self.edad=int(input("Ingrese la edad del pasajero: "))
        print("""1. Pasajero sentado
2. Pasajero parado""")
        sentado=input("Ingrese el estado del pasajero: ")
        if sentado.lower()=="sentado" or sentado=="1":
            self.sentado=True
        else:
            self.sentado=False
        if self.sentado:
            tarifa=tarifa+(0.2*tarifa)
        else:
            tarifa=tarifa-(0.1*tarifa)
        if self.edad<18:
            tarifa=tarifa-(0.2*tarifa)
        if self.distancia>100:
            tarifa=tarifa+(0.2*tarifa)
        print(f"La tarifa para el pasajero es de: {tarifa}Bs")

def Menu():
    while True:
        distancia=int(input("Ingrese la distancia recorrida: "))
        while True:
            print("Tipo de Transporte")
            print("1. Bus")
            print("2. Taxi")
            print("3. Tren")
            print("0. Salir")
            opcion=input("Seleccione un tipo de transporte: ")
            if opcion=="0" or opcion.lower()=="salir":
               break
            elif opcion=="1" or opcion.lower()=="bus":
               ObjetoBus=Bus(distancia)
               ObjetoBus.calcular_tarifa(distancia)    
               break
            elif opcion=="2" or opcion.lower()=="taxi":
               ObjetoTaxi=Taxi(distancia) 
               ObjetoTaxi.calcular_tarifa(distancia)
               break       
            elif opcion=="3" or opcion.lower()=="tren":
               ObjetoTren=Tren(distancia) 
               ObjetoTren.calcular_tarifa(distancia)
               break        
            else:
                print("Opcion Invalida")
        pregunta=input("Calcular otra tarifa (s/n): ")
        if pregunta.lower()=="n":
            break
            
Menu()

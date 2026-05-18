#Clase Padre

class Vehiculo:
    def caracteristica(self):
        print("Soy un vehiculo genericp, no temgo caracteristica")

#Clase Hija
class VehiculoAcuatico(Vehiculo):
    def caracteristica(self,submar):
        if submar:
            print("Soy un submarino")
        else: 
            print("Soy una lancha")

#Crear Objetos

vehiculoGenerico=Vehiculo()
submarino=VehiculoAcuatico()
lanchaJet=VehiculoAcuatico()

vehiculoGenerico.caracteristica()
submarino.caracteristica(True)
lanchaJet.caracteristica(False)

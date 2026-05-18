from abc import ABC, abstractmethod

class Personaje(ABC):
    def __init__(self,nombre,vida):
        self.nombre=nombre
        self.vida=vida
        self.muerto=False

    def isalive(self,vida):  
        if self.vida==0 or self.vida<0:
            print("Personaje Muerto")
            self.muerto=True        
    
    @abstractmethod
    def atacar(self):
        pass

class Guerrero(Personaje):
    def __init__(self,nombre,vida):
        super().__init__(nombre,vida)
        self.golpe=1000        

    def atacar(self):
        print("Estado Bersek Golpe")
        return self.golpe

class Mago(Personaje):
    def __init__(self,nombre,vida):
        super().__init__(nombre,vida)
        self.magia=1500        

    def atacar(self):
        print("Lanzar MATARAYO")
        return self.magia

class Arquero(Personaje):
    def __init__(self,nombre,vida):
        super().__init__(nombre,vida)
        self.flecha=1200        

    def atacar(self):
        print("LLuvia de flechas")
        return self.flecha


def Menu_Turnos(Personajes):
    while True:
        i=0
        for Personaje in Personajes:
         if not Personaje.muerto:
            print(f"{i+1}. {Personaje.nombre} ({Personaje.vida})")
            i+=1
         else:   
            print(f"{i+1}. {Personaje.nombre} (Muerto)")
            i+=1
        eleccion=input("Elige un personaje: ")
        encontrado = False
        for Personaje in Personajes:
            if eleccion == Personaje.nombre: 
                if Personaje.muerto:              
                 print("Este personaje está muerto, elige otro")
                 encontrado = True
                else:     
                 print(f"Elegiste a {Personaje.nombre}")
                 Eligir_Victima(eleccion,Personajes)
                 encontrado = True
                 break
        if not encontrado:
            print("Personaje no existe")
        vivos = [p for p in Personajes if not p.muerto]
        if len(vivos) == 1:
            print(f"¡{vivos[0].nombre} ganó!")
            break

def Eligir_Victima(eleccion,Personajes):
    i=0
    for Personaje in Personajes:
        if eleccion != Personaje.nombre and not Personaje.muerto:
         print(f"{i+1}. {Personaje.nombre}")
         i+=1
    eleccion2=input("Elige un personaje a atacar: ")
    encontrado = False
    for Personaje in Personajes:
        if eleccion2 == Personaje.nombre:      
            print(f"Elegiste a {Personaje.nombre} a atacar")
            for  Atacante in Personajes:
             if Atacante.nombre==eleccion:
                ataque=Atacante.atacar()
                Personaje.vida=Personaje.vida-ataque
                Personaje.isalive(Personaje.vida)
                encontrado = True
                break
            break
    if not encontrado:
        print("Pasas Turno")

def Simulacion():
    Leonidas=Guerrero("Leonidas",5000)
    Micaela=Mago("Micaela",2000)
    Manu=Arquero("Manu",4200)
    Personajes=[Leonidas,Micaela,Manu]
    Menu_Turnos(Personajes)
        
Simulacion()

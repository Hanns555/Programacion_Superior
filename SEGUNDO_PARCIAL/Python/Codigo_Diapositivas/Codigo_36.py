from abc import ABC, abstractmethod

class MetodoPago(ABC):
    @abstractmethod
    def pagar(self,monto):
        pass
    def procesar_pago(self,metodo_pago,monto):
        pass

class TarjetaCredito(MetodoPago):
    def __init__(self):
        self.numero=0
        self.codigo=0
        self.recursos=15000

    def pagar(self,monto):
        print("Pago con tajeta realizado")
    def procesar_pago(self,metodo_pago,monto):
        if metodo_pago=="Tarjeta":
            self.numero=int(input("Ingrese el numero de la tarjeta: ")) 
            self.codigo=int(input("Ingrese el codigo de la tarjeta: "))
            self.monto=float(input("Ingrese el monto a cancelar: "))
            self.recursos=self.recursos-self.monto
            self.pagar(self.monto)
            print(f"Su saldo es: {self.recursos}")
        else:
            print("Metodo de pago incorrecto")          

class Paypal(MetodoPago):
    def __init__(self):
        self.cuenta=""
        self.contrasenia="Contrasenia"
        self.recursos=15000
    def pagar(self,monto):
        print("Pago con paypal realizado")
    def procesar_pago(self,metodo_pago,monto):
        if metodo_pago==self.contrasenia:
            self.cuenta=int(input("Ingrese la cuenta de Paypal: ")) 
            self.monto=float(input("Ingrese el monto a cancelar: "))
            self.recursos=self.recursos-self.monto
            self.pagar(self.monto)
            print(f"Su saldo es: {self.recursos}")
        else:
            print("Contrasenia Incorrecta")            

class Cripto(MetodoPago):
    def __init__(self):
        self.cuenta=""
        self.moneda="Bitcoins"
        self.recursos=15000
    def pagar(self,monto):
        print("Pago con crypto realizado")
    def procesar_pago(self,metodo_pago,monto):
        if metodo_pago==self.moneda:
            self.cuenta=int(input("Ingrese la cuenta de Crypto: ")) 
            self.monto=float(input("Ingrese el monto a cancelar: "))
            self.recursos=self.recursos-self.monto
            self.pagar(self.monto)
            print(f"Su saldo es: {self.recursos}")
        else:
            print("Solo se acepta Bitcoins")    
        
def Menu():
    Tarjeta=TarjetaCredito()
    MiPaypal=Paypal()
    MiCrypto=Cripto()
    while True:
        print(20*"=")
        print("SISTEMA DE PAGOS")
        print(20*"=")
        print("1. Tarjeta")
        print("2. Paypal")
        print("3. Cripto")
        print("0. Salir")
        opcion=input("Ingrese el metodo de pago que va a realizar: ")
        if opcion=="Salir" or opcion=="0": break
        elif opcion=="1":
            Tarjeta.procesar_pago("Tarjeta",10000)
        elif opcion=="2":
            MiPaypal.procesar_pago("Contrasenia",20000)
        elif opcion=="3":
            MiCrypto.procesar_pago("Bitcoins",10000)
        else:
            print("Opcion Invalida")
        
Menu()

from abc import ABC, abstractmethod

class MetodoPago(ABC):
    @abstractmethod
    def pagar(self,monto):
        pass
    def procesar_pago(self,metodo_pago,monto):
        pass

class TarjetaCredito(MetodoPago):
    def __init__(self):
        self.__numero=0
        self.__codigo=0
        self.__recursos=15000

    def pagar(self,monto):
        print(f"Pago {monto} con tajeta de credito")
    def procesar_pago(self,monto):
        if monto<=self.__recursos:
            self.__numero=int(input("Ingrese el numero de la tarjeta: ")) 
            self.__codigo=int(input("Ingrese el codigo de la tarjeta: "))
            self.__recursos=self.__recursos-monto
            self.pagar(monto)
            print(f"Su saldo es: {self.__recursos}")
        else:
            print("Fondos Insuficientes")          

class Paypal(MetodoPago):
    def __init__(self):
        self.__cuenta=""
        self.__contrasenia="123456"
        self.__recursos=15000
    def pagar(self,monto):
        print(f"Pago {monto} con Paypal")
    def procesar_pago(self,monto):
        if monto<=self.__recursos:
            self.__cuenta=input("Ingrese la cuenta de Paypal: ")
            contrasenia=input("Ingrese su contrasenia: ")
            if contrasenia==self.__contrasenia:
                self.__recursos=self.__recursos-monto
                self.pagar(monto)
                print(f"Su saldo es: {self.__recursos}")
            else:
                print("Contrasenia Incorrecta")   
        else:
            print("Fondos Insuficientes")              

class Cripto(MetodoPago):
    def __init__(self):
        self.cuenta=""
        self.moneda="Bitcoins"
        self.__recursos=15000
    def pagar(self,monto):
        print(f"Pago {monto} con Wallet")
    def procesar_pago(self,monto):
        if monto<=self.__recursos:
            moneda=input("Ingrese el tipo de moneda de la Wallet: ")
            if moneda==self.moneda:
                self.cuenta=input("Ingrese la cuenta de Crypto: ") 
                self.__recursos=self.__recursos-monto
                self.pagar(monto)
                print(f"Su saldo es: {self.__recursos}")
            else:
                print("Solo se acepta Bitcoins")    
        else:
            print("Fondos Insuficientes")   
        
def Menu():
    Tarjeta=TarjetaCredito()
    MiPaypal=Paypal()
    MiCrypto=Cripto()
    monto=float(input("Ingrese el monto a cancelar: "))
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
            Tarjeta.procesar_pago(monto)
        elif opcion=="2":
            MiPaypal.procesar_pago(monto)
        elif opcion=="3":
            MiCrypto.procesar_pago(monto)
        else:
            print("Opcion Invalida")
       
Menu()

def PatronH():
    for x in range(9):
     if x==4:
        print(11*"*")
     elif x!=4:
        print("*"+(9*" ")+"*")
        
def PatronS():
    for x in range(9):
     if x==0:
        print(11*"*")
     elif x==4:
        print(11*"*")
     elif x==8:
        print(11*"*")
     else:
        if x<4:
         print("*")
        else:
         print(10*" "+"*")
def Menu():
 salir=True
 while salir:
    try:
        while True:
            print(21*"=")
            print(8*" "+"MENU")
            print(21*"=")
            print("1. Generar H")
            print("2. Generar S")
            print("0. Salir")
            opcion=input("Ingrese una opcion: ")
            if opcion=="0" or opcion.lower()=="salir":
                print("Saliendo")
                salir=False
                break
            elif opcion=="1" or opcion.lower()=="generar h":
                PatronH()
            elif opcion=="2" or opcion.lower()=="generar s":
                PatronS()
            else:
                print("Opcion Invalida")

    except KeyboardInterrupt:
        opcion=input("\n Seguro qe quiere detener la ejecucion (s/n): ")
        if opcion=="s":
            print("Deteniendo Programa")
            break
        elif opcion=="n":
            print("Continuando ejecucion")
        else:
            print("Opcion Invalida")
    except:
        print("Error Inesperado")
        break

Menu()

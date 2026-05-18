Diccionario={
    "Nombre":"Barry",
    "Edad":25,
    "Estudiante":True,
    "Materias":["Programacion","Circuitos"]
}

def Cambiar_Nombre():
    Diccionario["Nombre"]=input("Ingrese el nuevo nombre del estudiante: ")

def Mostrar_Estudiante(*args,**kwargs):
    for clave,valor in kwargs.items():
     print(f"{clave}: {valor}")
     
def Agregar_Elemento():
    Atributo=input("Ingrese el nuevo elemento que quiere agregar: ")
    Dato=input("Ingrese el dato del nuevo elemento: ")
    Diccionario[Atributo]=Dato
    
def Mostrar_Lista(Materias):
    cantidad=0
    for x in Materias:
        print(f"{cantidad+1}. {x}")
        cantidad+=1
        
def Menu_Materias(Materias):
    while True:
        print(20*"=")
        print(f"1. Agregar Materia")
        print(f"2. Quitar Materia")
        print(f"3. Mostrar Materias")
        print(f"0. Salir")
        print(20*"=")
        opcion=input("Ingrese una Opcion: ")
        if opcion=="Salir" or opcion=="0": break
        elif opcion=="1":
            materia_aniadida=input("Ingrese el nombre de la materia a aniadir: ")
            Materias.append(materia_aniadida)
        elif opcion=="2":
            Mostrar_Lista(Materias)
            quitar=input("Ingrese el nombre de la materia a quitar: ")
            if quitar in Materias:
             Materias.remove(quitar)
            else:
             print("La materia no la esta tomando el estudiante")
        elif opcion=="3":
            Mostrar_Lista(Materias)
        else: 
            print("Opcion Invalida")   
                        
def Menu_Principal():
    while True:
            print(20*"=")
            print("MENU ESTUDIANTE")
            print(f"1. Cambiar Nombre")
            print(f"2. Agregar Datos")
            print(f"3. Materias")
            print(f"4. Mostrar Datos")
            print(f"0. Salir")
            print(20*"=")
            opcion=input("Ingrese una Opcion: ")
            if opcion=="Salir" or opcion=="0": break
            elif opcion=="1":
                Cambiar_Nombre()
            elif opcion=="2":
                Agregar_Elemento()
            elif opcion=="3":
                Menu_Materias(Diccionario["Materias"])
            elif opcion=="4":
                Mostrar_Estudiante(**Diccionario)
            else: 
                print("Opcion Invalida")   

Menu_Principal()

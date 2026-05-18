lista_Estudiantes=[]

while True:
    Estudiante={}
    Estudiante["Nombre"]=input("Ingrese el nombre del estudiasnte: ")
    Estudiante["Edad"]=int(input("Ingrese la edad del estudiante: "))
    Estudiante["Carrera"]=input("Ingrese la carrera del estudiante: ")
    Estudiante["Semestre"]=input("Ingrese el semestre del estudiante: ")
    lista_Estudiantes.append(Estudiante)
    continuar = input("Continuar agregando estudiantes (s/n): ")
    if continuar == "n":  
     break

for Student in lista_Estudiantes:
    print(f"""
Nombre: {Student["Nombre"]}
Edad: {Student["Edad"]}
Carrera: {Student["Carrera"]}
Semestre: {Student["Semestre"]}
    """)

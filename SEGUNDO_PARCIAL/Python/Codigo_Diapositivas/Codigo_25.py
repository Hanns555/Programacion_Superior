dict={
     "Estudiante" : "Nommbre",
     "Edad" : 0,
     "Carrera" : "Carrera",
     "Semestre" : "Semestre"
}

dict["Estudiante"]=input("Ingrese el nombre del estudiante: ")
dict["Edad"]=int(input("Ingrese la edad del estudiante: "))
dict["Carrera"]=input("Ingrese la carrera del estudiante: ")
dict["Semestre"]=input("Ingrese el semestre del estudiante: ")
atributo=input("Ingrese la clave del nuevo atributo: ")
dato=input("Ingrese el dato del nuevo atributo: ")

dict[atributo]=dato

print(f"""
Datos del Estudiante
Estudiante: {dict["Estudiante"]}  
Edad: {dict["Edad"]}  
Carrera: {dict["Carrera"]}     
Semestre: {dict["Semestre"]}
{atributo}: {dict[atributo]}  
""")

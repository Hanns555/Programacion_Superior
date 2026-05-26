class EdadError(Exception):
    def __init__(self, mensaje):
        self.mensaje = mensaje
        super().__init__(self.mensaje)

class PromedioError(Exception):
    def __init__(self, mensaje):
        self.mensaje = mensaje
        super().__init__(self.mensaje)

class Estudiantes:
    def __init__(self):
        self.nombre = ""
        self.edad = 0
        self.carrera = ""
        self.semestre = 0
        self.__promedionotas = 0

    def RegistrarEstudiantes(self):
        self.nombre = input("Ingrese el nombre del estudiante: ")
        while True:
            try:
                self.edad = int(input("Ingrese la edad del estudiante: "))
                if self.edad <= 0:
                    raise EdadError("La edad no puede ser negativa")
                break
            except ValueError:
                print("No se aceptan caracteres")
            except EdadError:
                print("Edad no puede ser negativa")
        self.carrera = input("Ingrese la carrera del estudiante: ")
        while True:
            try:
                self.semestre = int(input("Ingrese el semestre del estudiante: "))
                break
            except ValueError:
                print("No se aceptan caracteres")
        while True:
            try:
                self.__promedionotas = float(input("Ingrese el promedio del estudiante: "))
                if self.__promedionotas < 0:
                    raise PromedioError("El promedio no puede ser negativo")
                break
            except ValueError:
                print("No se aceptan caracteres")
            except PromedioError:
                print("Promedio no puede ser menor a 0")

    def MostrarDatosEstudiante(self):
        print("Nombre: ", self.nombre)
        print("Edad: ", self.edad)
        print("Carrera: ", self.carrera)
        print("Semestre: ", self.semestre)
        print("Promedio: ", self.__promedionotas)

    def ObtenerPromedio(self):
        return self.__promedionotas

def CrearEstudiantes():
    ListaEstudiante = []
    while True:
        try:
            nroestudiantes = int(input("Ingrese la cantidad de estudiantes a registrar: "))
            break
        except ValueError:
            print("No se aceptan caracteres")
    for x in range(nroestudiantes):
        print(f"Registrando estudiante {x+1}")
        Universitario = Estudiantes()
        Universitario.RegistrarEstudiantes()
        ListaEstudiante.append(Universitario)
    return ListaEstudiante


def MostrarEstudiantes(lista):
    if not lista:
        print("No hay estudiantes para mostrar.")
        return
    for i, Estudiante in enumerate(lista):
        print(15 * "=")
        print(f"Estudiante {i+1}")
        Estudiante.MostrarDatosEstudiante()
    print(15 * "=")


def FiltrarEstudiantesEdad(lista):
    return [estudiante for estudiante in lista if estudiante.edad > 25]


def FiltrarEstudiantesINB(lista):
    return [estudiante for estudiante in lista if estudiante.carrera.lower() == "ingenieria biomedica"]


def FiltrarPromedioAlto(lista):
    return [estudiante for estudiante in lista if estudiante.ObtenerPromedio() > 88]


def FiltrarPromedioBajo(lista):
    return [estudiante for estudiante in lista if estudiante.ObtenerPromedio() < 70]


def Menu():
    ListaEstudiante = []
    while True:
        print(30 * "=")
        print(8*" "+" GESTION DE ESTUDIANTES")
        print(30 * "=")
        print("  1. Registrar estudiantes")
        print("  2. Mostrar todos los estudiantes")
        print("  3. Filtrar mayores de 25 anios")
        print("  4. Filtrar por Ingenieria Biomedica")
        print("  5. Filtrar promedio mayor a 88")
        print("  6. Filtrar promedio menor a 70")
        print("  7. Salir")
        print(30 * "=")
        while True:
            try:
                opcion = int(input("Seleccione una opcion: "))
                break
            except ValueError:
                print("Ingrese un numero valido")
        if opcion == 1:
            ListaEstudiante = CrearEstudiantes()
            print(f"Se registraron {len(ListaEstudiante)} estudiante(s) correctamente")
        elif opcion == 2:
            print("TODOS LOS ESTUDIANTES")
            MostrarEstudiantes(ListaEstudiante)
        elif opcion == 3:
            if not ListaEstudiante:
                print("No hay estudiantes registrados")
            else:
                print("ESTUDIANTES MAYORES DE 25 ANIOS")
                MostrarEstudiantes(FiltrarEstudiantesEdad(ListaEstudiante))
        elif opcion == 4:
            if not ListaEstudiante:
                print("No hay estudiantes registrados")
            else:
                print("ESTUDIANTES DE INGENIERIA BIOMEDICA")
                MostrarEstudiantes(FiltrarEstudiantesINB(ListaEstudiante))
        elif opcion == 5:
            if not ListaEstudiante:
                print("No hay estudiantes registrados")
            else:
                print("ESTUDIANTES CON PROMEDIO>88")
                MostrarEstudiantes(FiltrarPromedioAlto(ListaEstudiante))
        elif opcion == 6:
            if not ListaEstudiante:
                print("No hay estudiantes registrados")
            else:
                print("ESTUDIANTES CON PROMEDIO<70")
                MostrarEstudiantes(FiltrarPromedioBajo(ListaEstudiante))
        elif opcion == 7:
            print("Saliendo del Programa")
            break
        else:
            print("Opcion no valida")
            
Menu()

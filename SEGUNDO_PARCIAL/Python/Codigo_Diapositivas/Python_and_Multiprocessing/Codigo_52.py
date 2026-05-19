#Programa sin Hilos
import time

def tarea(nombre):
    print(f"Iniciando {nombre}")
    time.sleep(2)
    print(f"Finalizando {nombre}")

inicio=time.time()

for i in range(3):
    tarea(f"Tarea {i}")

fin = time.time()

print(f"Tiempo total: {fin-inicio: .2f} segundoss")

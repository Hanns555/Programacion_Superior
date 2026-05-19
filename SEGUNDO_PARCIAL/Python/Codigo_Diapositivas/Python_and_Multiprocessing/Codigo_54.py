import time

def tarea():
    suma=0
    for i in range(10**7):
        suma+=i
    return suma


inicio=time.time()

for _ in range(4):
    tarea()

fin=time.time()

print(f"Tiempo secuencial: {fin-inicio:.2f} segundos")

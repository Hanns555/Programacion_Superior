import time
import threading

def tarea():
    suma=0
    for i in range(10**7):
        suma+=i

inicio=time.time()

hilos=[]

for _ in range(4):
    hilo=threading.Thread(target=tarea)
    hilos.append(hilo)
    hilo.start()        

for hilo in hilos:
    hilo.join()

fin=time.time()
print(f"Tiempo con hilos: {fin-inicio:.2f} segundos")

import time
import threading

def tarea(nombre):
    print(f"Iniciando {nombre}")
    time.sleep(2)
    print(f"Finalizando {nombre}")

inicio=time.time()

hilos=[]

for i in range(3):
    hilo=threading.Thread(target=tarea, args=(f"Tarea {i}",))
    hilos.append(hilo)
    hilo.start()

for hilo in hilos:
    hilo.join()

fin=time.time()
print(f"Tiempo total: {fin-inicio:.2f} segundos")

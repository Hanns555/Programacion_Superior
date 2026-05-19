import multiprocessing
import time

def tarea(nombre):
    print(f"Proceso {nombre} iniciado")
    suma=0
    for i in range(10**7):
        suma+=i
    print(f"Proceso {nombre} finalizado")

if __name__=="__main__":
    inicio=time.time()
    procesos=[]
    for i in range(4):
        proceso=multiprocessing.Process(
            target=tarea,
            args=(i,)
        )
        procesos.append(proceso)
        proceso.start()
    for proceso in procesos:
        proceso.join()
    fin=time.time()
    print(f"Tiempo total: {fin-inicio:.2f} segundos")

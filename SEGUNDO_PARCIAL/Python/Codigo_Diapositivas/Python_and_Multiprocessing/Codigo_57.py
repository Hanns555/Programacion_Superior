import multiprocessing

def tarea():
    print("Proceso daemon corriendo")

p = multiprocessing.Process(target=tarea)
p.daemon = True   
p.start()


def tarea():
    print("Proceso corriendo")

if __name__ == "__main__":   
    p = multiprocessing.Process(target=tarea)
    p.start()

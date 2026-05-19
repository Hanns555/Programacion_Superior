import multiprocessing

def cuadrado(n):
    return n * n

if __name__ == "__main__":
    with multiprocessing.Pool(processes=4) as pool:
        resultados = pool.map(cuadrado, [1, 2, 3, 4, 5])
    print(resultados)  

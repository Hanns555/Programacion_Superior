def division(a,b):  
    try:
        print(a/b)
    except  ZeroDivisionError:
        print("Error de division")        
    except:
        print("Otro error")
    else:
        print("Ejecucion sin errores")
    finally:
        print("Siempre se ejecuta hasta el final")


division(3,5)
division(3,0)
division(3,"hola")

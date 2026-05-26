tupla=("12", "a", "5", "!", "7") 

def ObtenerNumeros(*args):
    listanumero=[]
    for elemento in args:
        try:
            listanumero.append(str(int(elemento)))
        except ValueError:
            print(f"El elemento {elemento} no es convertible a numero")
    return listanumero
    
valoresguardados=ObtenerNumeros(*tupla)
print(valoresguardados)

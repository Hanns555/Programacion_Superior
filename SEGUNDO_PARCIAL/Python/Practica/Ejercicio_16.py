def CopiarTexto():
  try:
    with open ("libro.txt","x") as librocopia:
        with open("Ejercicio_16.txt","r") as libro:
            for lineas in libro:
                librocopia.write(lineas)
  except FileExistsError:
   print("El libro ya fue copiado")

CopiarTexto()

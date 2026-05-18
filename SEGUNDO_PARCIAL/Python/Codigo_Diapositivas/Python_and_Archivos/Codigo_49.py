#Con with no es necesario cerrar el archivo

try:
    with open("pruebita.txt","a") as txt_file:
        txt_file.write("Segunda pruebita \n")
except Exception as e:
    print(f"El archivo no puede ser abierto: {e}")

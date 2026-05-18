#Comando open and close

try:
    txt_file=open("pruebita.txt","x")
    txt_file.write("Este es un texto de prueba :D \n")
    txt_file.close()
except Exception as e:
    print(f"El archivo no puede ser abierto error: {e}")

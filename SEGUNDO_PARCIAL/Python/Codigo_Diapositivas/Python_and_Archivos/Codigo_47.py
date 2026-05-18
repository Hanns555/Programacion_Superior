content=["Primera linea extra","Segunda linea extra","Tercera linea extra"]

file=open("texto.txt","a")
for x in content:
    file.write(f"\n {x}")
file.close()

file=open("texto.txt","r")
lineas=file.readlines()
print(lineas)

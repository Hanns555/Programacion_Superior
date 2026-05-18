file=open("texto.txt")
#print(file.read())

for line in file:
    print(line)
    for char in line:
        print(char)

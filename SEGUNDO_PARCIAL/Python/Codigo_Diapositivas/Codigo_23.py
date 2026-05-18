l1=["a","e","i","o","u"]
l2=["Pera","hjk","comida","jsjsj"]

contador=0

for x in l1:
    for y in l2:
        for z in range(len(y)):
         if x==y[z]:
          contador+=1

print (f"Se repite los elementos de l1 en l2 {contador} veces")      

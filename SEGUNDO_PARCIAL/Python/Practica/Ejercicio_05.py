#Codigo Minerales
min1="NiquelNi23"
min2="OroAu13"
min3="MercurioHg12"

minerales=[min1,min2,min3]
tuplaValencia=()
listaSimbolo=[]
listaNombres=[]
todosminerales=[]

for mineral in minerales:
    tuplaValencia=list(tuplaValencia)
    tuplaValencia.append(mineral[-2:])
    listaSimbolo.append(mineral[-4:-2])
    listaNombres.append(mineral[:-4])
    
tuplaValencia=tuple(tuplaValencia)

for x in range(len(minerales)):
    diccionariominerales = {
    "Nombre":listaNombres[x],
    "Simbolo":listaSimbolo[x],
    "Valencia":tuplaValencia[x]
    }
    todosminerales.append(diccionariominerales)


print(tuplaValencia)
print(listaSimbolo)
#print(listaNombres)
for diccionario in todosminerales:  
    print(diccionario)

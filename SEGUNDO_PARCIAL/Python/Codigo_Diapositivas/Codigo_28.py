def funcion_con_args_kwargs(nombre,edad,*args,**kwargs):
 for elemento in args:
  print(f"Elemento {elemento} dentro de args")
 print(f"Elemento tipo clave, valor: {kwargs}")
#Apartir del tercer elemnto son los args
funcion_con_args_kwargs("Pepe",22,"casa","auto","perro","gato",clave1=10,clave2=20)

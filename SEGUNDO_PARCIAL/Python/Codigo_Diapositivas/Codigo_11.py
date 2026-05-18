print("For con break")

fruits=["apple", "banana", "cherry"]
for x in fruits:
    if x=="cherry":
     break
    print(x) 

print("For con range")

for x in range(2,6):
    print(x)

print("For con else")

for x in range(2):
    if x==3: break
    print(x)
else:
 print("Finally finished")

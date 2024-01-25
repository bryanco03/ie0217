import random


print(random.randrange(10,20))

list1= ["a", "b", "c", "d", "e"]

# Obtener un elemento random de list1
print(random.choice(list1))

# revolver la lista
random.shuffle(list1)

print(list1)

# mostrar un elemento random 
print(random.random())

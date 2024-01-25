prime_numbers = [2, 3, 5]
print("List1:", prime_numbers)

even_numbers = [4, 6, 8]
print("list2:", even_numbers)

# unir las dos listas
prime_numbers.extend(even_numbers)

print("Despues de unir las listas",prime_numbers)
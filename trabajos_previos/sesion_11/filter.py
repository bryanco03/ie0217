# programa para filtrar los numeros pares de una lista

my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list= list(filter(lambda x: (x%2 == 0), my_list))

print(new_list)
try:
    even_numbers = [2, 4, 6, 8]
    print(even_numbers[5])

except ZeroDivisionError:
    print("El denominador no puede ser cero")

except IndexError:
    print("Index fuera de rango")

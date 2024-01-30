def calculate():
    num = 1
    def inner_func():
        nonlocal num
        num +=2
        return num
    return inner_func

# llamar la funcion de afuera
odd = calculate()

# llamar la funcion anidada
print(odd())
print(odd())
print(odd())

# llamar la funcion de afuera de nuevo
odd2 = calculate()
print(odd2())
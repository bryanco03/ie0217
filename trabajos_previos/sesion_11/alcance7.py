num = 33

def outer_function():
    num = 20

    def inner_function():
        global num
        num = 25
    
    print("Antes de llamar la funcion inner_function:", num)
    inner_function()
    print("Despues de llamar la funcion inner_function:", num)

print("Antes de llamar outer", num)

outer_function()

print("Afuera de las funciones", num)

def make_pretty(func):
    # se define una funcion anidada
    def inner():
        # añadir algunas mejoras para decorar la funcion
        print("I got decorated")

        # llamar la funcion original
        func()
    return inner

# definir una funcion ordinaria
def ordinary():
    print("I am ordinary")

# decorar la funcion ordinaria
decorated_func = make_pretty(ordinary)

# llamar la funcion decorada
decorated_func()

# otra sintaxis 

@make_pretty
def ordinary1():
    print("I am ordinary")

ordinary1()
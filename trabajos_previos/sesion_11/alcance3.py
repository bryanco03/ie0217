# funcion de afuera
def outer():
    message = "Local"

    # funcion adentro
    def inner():
        nonlocal message

        message = "nonlocal"
        print("Inner:", message)
    inner()
    print("outer:", message)

outer()
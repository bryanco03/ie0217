def outer(x):
    def inner(y):
        return x + y
    return inner

add_five =  outer(5)
result = add_five(6)

print(result) # salida 11
# declarar una variable global
message = "Hello"

def greet():
    print("Local",message)

greet()
print("global",message)
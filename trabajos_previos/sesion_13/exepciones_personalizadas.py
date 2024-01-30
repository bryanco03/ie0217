# se define una exepcion
class InvalidAgeException(Exception):
    "Raised when the input value is lees than 18 "
    pass

number = 18

try:
    input_num = int(input(" Ingrese un numero: "))
    if input_num < number:
        raise InvalidAgeException
    else:
        print("Puede votar")
except InvalidAgeException:
    print("Excepcion ocurrida: Edad invalida")

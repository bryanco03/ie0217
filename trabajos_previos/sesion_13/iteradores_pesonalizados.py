class PowTwo:
    """
    Clase para implementar un iterador de potencias de dos
    """

    def __init__(self, max = 0):
        self.max = max
    
    def __iter__(self):
        self.n = 0
        return self
    
    def __next__(self):
        if self.n <= self.max:
            result = 2 ** self.n
            self.n += 1
            return result  
        else:
            raise StopIteration
        
# crear objeto
numbers = PowTwo(3)

# crear  un iterador del objeto
i = iter(numbers)


# usando el iterador para obtener los elementos
print(next(i)) # muestra 1
print(next(i)) # muestra 2
print(next(i)) # muestra 4
print(next(i)) # muestra 8 
print(next(i)) # muestra error StopIteration




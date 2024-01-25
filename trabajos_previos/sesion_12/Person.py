class Person:
    def __init__(self, name , age):
        self.name = name # Publico
        self.age = age  # Publico



class Person2:
    def __init__(self, name , age):
        self._name = name # Protegido
        self._age = age  #Protegid0




class Person3:
    def __init__(self, name , age):
        self.__name = name  # Privado
        self.__age = age # Privado

class Person:
    def __init__(self, name, age) :
        self.name = name
        self.age = age
    # Sobrecarga del operador <
    def __lt__(self, other):
        return self.age < other.age
    
p1 = Person("Alice",20)
p2 = Person("Bob",30)

print(p1 < p2)
print(p2 < p1)
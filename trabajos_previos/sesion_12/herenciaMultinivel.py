class SuperClass:
    def super_method(self):
        print("Super Class method called")

# Se define una clase derivada de SuperClass
class DerivedClass(SuperClass):
    def derived1_method(self):
        print("Derived class 1 method called")

# se define una clase derivada de DerivedClass
class DerivedClass2(DerivedClass):
    def derived2_method(self):
        print("Derived class 2 method called")

# crear objeto de DerivedClass2
d2 = DerivedClass2()
d2.super_method()
d2.derived1_method()
d2.derived2_method()
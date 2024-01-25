from Person import Person

class Teacher(Person):

    # Constructor de Teacher
    def __init__(self, name, age, empleyee_id):
        # Se llama al constructor de Person 
        super().__init__(name, age)
        # Se asignan valores a los atributos
        self.empleyee_id = empleyee_id
        self.courses_taught = []
    
    # Metodo para asignar un curso al profesor
    def assign_course(self, course):
        # Se utiliza append() para agregar el curso
        self.courses_taught.append(course)

    # Metodo para mostrar informacion
    def display_info(self):
        # Se llama al metodo de la clase base
        super().display_info()
        # Se muestra la infomacion del profesor
        print(f"Employee ID: {self.empleyee_id}\nCourses taught: {', '.join(self.courses_taught)}\n")


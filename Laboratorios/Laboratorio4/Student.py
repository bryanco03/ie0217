from Person import Person

class Student(Person):

    # construtor de studemt
    def __init__(self, name, age, student_id):
        # Llaman al inicialiador de la clase Base Person
        super().__init__(name, age)
        self.student_id = student_id
        self.courses = []

    # Metodo para matricular un curso
    def enroll_course(sefl,course):
        # Se usa append() para agregar el curso a la lista
        sefl.courses.append(course)

    # Metodo para mostrar informacion del estudiante
    def display_info(self):
        # Se llama el metodo de la clase base Person
        super().display_info()
        # Se muestra  el ID y los cursos
        print(f"Student ID: {self.student_id}\nCourses: {', '.join(self.courses)}\n" )
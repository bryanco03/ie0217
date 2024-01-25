from Student import Student
from teacher import Teacher
from course import Course


# Se instacia dos objetos de la clase Student
Student1 = Student("Bryan","20","C22422")
Student2 = Student("Maria","28","B35149")

# Se instacia dos objetos de la clase Teacher
teacher1 =  Teacher("Jorge Romero", 65, "123456")
teacher2 =  Teacher("Luis Diego Marin", 61, "55555")

# Se instacia dos objetos de la clase Course
course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD!")

# Se llama el metodo de matricular curso 
Student1.enroll_course(course1.course_code)
Student1.enroll_course(course2.course_code)

# Se llama el metodo de asignar curso a un profesor 
teacher1.assign_course(course1.course_code)
teacher2.assign_course(course2.course_code)


# LLamar metodos para mostrar informacion
Student1.display_info()

teacher1.display_info()

course1.display_info()
# Se define una clase
class Employee:
    # Se define un atributo
    employee_id = 0


# crear dos objetos con la clase employee
employee1 =Employee()
employee2 =Employee()

# accedidendo atributos de employee1
employee1.employee_id = 1001
print(f"Employee ID: {employee1.employee_id}")

# accedidendo atributos de employee2
employee2.employee_id = 1002
print(f"Employee ID: {employee2.employee_id}")
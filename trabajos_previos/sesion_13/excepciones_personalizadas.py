class SalaryNotInRange(Exception):
    """
    La excepcion se levanta con un error en la entrada de salario.

    Atributes:
        salary -- Salario de entrada el cual causa error
        message -- explicacion del error
    
    
    """
    def __init__(self, salary, message = "Salary is not in (5000, 15000) range"):
        self.salary = salary
        self.message = message
        super().__init__(self.message)

salary = int(input("Ingrese el monto del salario: "))
if not 5000 < salary < 15000:
    raise SalaryNotInRange(salary)
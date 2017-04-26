class Employee(object):
    """Modela funcionarios da vida real!"""
    def __init__(self, employee_name):
        self.employee_name = employee_name

    def calculate_wage(self, hours):
        self.hours = hours
        return hours * 20.00

# Adicione seu codigo abaixo!
class PartTimeEmployee(Employee):
    def calculate_wage(self, hours):
        slef.hours = hours
        return hours * 12

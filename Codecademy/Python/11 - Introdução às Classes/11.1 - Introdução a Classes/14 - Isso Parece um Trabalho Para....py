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
        self.hours = hours
        return hours * 12
        
    def full_time_wage(self, hours):
        return super(PartTimeEmployee, self).calculate_wage(hours)
        
        
milton = PartTimeEmployee("Teste")
print milton.full_time_wage(1)

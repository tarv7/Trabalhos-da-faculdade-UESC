class Car(object):
    condition = "novo"
    def __init__(self, model, color, mpg):
        self.model = model
        self.color = color
        self.mpg   = mpg
        
    def display_car(self):
        return 'Este e um %s cor %s que faz %s MPG.' % (self.model,self.color,self.mpg)
        
    def drive_car(self):
        self.condition = "usado"

my_car = Car("DeLorean", "prata", 88)
print my_car.condition
print my_car.model
print my_car.color
print my_car.mpg
my_car.drive_car()
print my_car.condition

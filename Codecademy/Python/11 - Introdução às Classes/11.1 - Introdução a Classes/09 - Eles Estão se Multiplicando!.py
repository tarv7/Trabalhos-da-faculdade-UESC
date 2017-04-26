class Animal(object):
    """Cria animais bonitinhos."""
    is_alive = True
    health = "boa"
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # Adicione seu metodo aqui!
    def description(self):
        print self.name
        print self.age
        
hippo = Animal("Gato", 3)
hippo.description()

sloth = Animal("Arthur", 11)
ocelot = Animal("Thales", 20)

print hippo.health
print sloth.health
print ocelot.health

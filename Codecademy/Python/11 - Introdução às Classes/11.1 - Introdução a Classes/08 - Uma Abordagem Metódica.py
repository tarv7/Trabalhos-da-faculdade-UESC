class Animal(object):
    """Cria animais bonitinhos."""
    is_alive = True
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # Adicione seu metodo aqui!
    def description(self):
        print self.name
        print self.age
        
hippo = Animal("Gato", 3)
hippo.description()

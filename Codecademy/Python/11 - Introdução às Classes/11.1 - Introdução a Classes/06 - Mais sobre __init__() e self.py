# Definicao da classe
class Animal(object):
    """Cria animais bonitinhos."""
    # Para inicializar nossas instancias de objetos
    def __init__(self, name, age, is_hungry):
        self.name = name
        self.age = age
        self.is_hungry = True

# Note que self e usado apenas na definicao da funcao 
# __init__(); nao quereomos passa-lo
# para nossas sinstancias de objetos.

zebra = Animal("Jeffrey", 2, True)
giraffe = Animal("Bruce", 1, False)
panda = Animal("Chad", 7, True)

print zebra.name, zebra.age, zebra.is_hungry
print giraffe.name, giraffe.age, giraffe.is_hungry
print panda.name, panda.age, panda.is_hungry

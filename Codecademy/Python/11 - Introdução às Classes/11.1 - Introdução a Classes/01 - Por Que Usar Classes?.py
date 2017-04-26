class Fruit(object):
    """Uma classe que cria muitas frutas deliciosas."""
    def __init__(self, name, color, flavor, poisonous):
        self.name = name
        self.color = color
        self.flavor = flavor
        self.poisonous = poisonous

    def description(self):
        print "Sou uma %s %s e meu sabor e %s." % (self.color, self.name, self.flavor)

    def is_edible(self):
        if not self.poisonous:
            print "Sim! Sou comestivel."
        else:
            print "Nao me coma! Sou super venenoso(a)."

lemon = Fruit("lemon", "yellow", "sour", False)

lemon.description()
lemon.is_edible()

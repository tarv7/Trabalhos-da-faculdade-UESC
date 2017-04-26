class Customer(object):
    """Produz objetos que representam consumidores."""
    def __init__(self, customer_id):
        self.customer_id = customer_id

    def display_cart(self):
        print "Sou uma string que representa o conteudo do seu carrinho de compras!"

class ReturningCustomer(Customer):
    """Para clientes que voltam sempre."""
    def display_order_history(self):
        print "Sou uma string que representa seu historico de compras!"

monty_python = ReturningCustomer("ID: 12345")
monty_python.display_cart()
monty_python.display_order_history()

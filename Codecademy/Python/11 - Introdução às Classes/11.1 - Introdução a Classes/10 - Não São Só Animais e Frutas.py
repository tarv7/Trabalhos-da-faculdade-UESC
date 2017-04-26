class ShoppingCart(object):
    """Cria objetos carrinhos de compra (shopping cart)
    para os usuarios do nosso belo website."""
    items_in_cart = {}
    def __init__(self, customer_name):
        self.customer_name = customer_name

    def add_item(self, product, price):
        """Adiciona o produto ao carrinho."""
        if not product in self.items_in_cart:
            self.items_in_cart[product] = price
            print product + " added."
        else:
            print product + " ja esta no carrinho."

    def remove_item(self, product):
        """Remove o produto do carrinho."""
        if product in self.items_in_cart:
            del self.items_in_cart[product]
            print product + " removido."
        else:
            print product + " nao esta no carrinho."
            
my_cart = ShoppingCart("Gadgets")
my_cart.add_item("Notebook", 15)

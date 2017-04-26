prices = {
    "banana": 4,
    "maca": 2,
    "laranja": 1.5,
    "pera": 3
}

stock = {
    "banana": 6,
    "maca": 0,
    "laranja": 32,
    "pera": 15
}

for chave in prices:
    print chave
    print "price: %s" % prices[chave]
    print "stock: %s" % stock[chave]

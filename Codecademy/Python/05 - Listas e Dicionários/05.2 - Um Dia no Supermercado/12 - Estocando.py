shopping_list = ["banana", "laranja", "maca"]

stock = {
    "banana": 6,
    "maca": 0,
    "laranja": 32,
    "pera": 15
}
    
prices = {
    "banana": 4,
    "maca": 2,
    "laranja": 1.5,
    "pera": 3
}

def compute_bill(food):
    total = 0
    
    for item in food:
        if stock[item] > 0:
            total = total + prices[item]
            stock[item] = stock[item] - 1
    return total

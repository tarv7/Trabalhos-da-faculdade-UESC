def tax(bill):
    """Soma 8% de imposto a uma conta de restaurante."""
    bill *= 1.08
    print "Com imposto: %f" % bill
    return bill

def tip(bill):
    """Soma uma gorjeta de 15% a uma conta de restaurante."""
    bill *= 1.15
    print "com gorjeta de: %f" % bill
    return bill
    
meal_cost = 100
meal_with_tax = tax(meal_cost)
meal_with_tip = tip(meal_with_tax)

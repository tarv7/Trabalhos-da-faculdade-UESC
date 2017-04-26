def purify(lista):
    pares = []
    
    for item in lista:
        if item % 2 == 0:
            pares.append(item)
            
    return pares

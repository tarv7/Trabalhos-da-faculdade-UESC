def remove_duplicates(lista):
    saida = []
    
    for i in lista:
        if i not in saida:
            saida.append(i)
            
    return saida

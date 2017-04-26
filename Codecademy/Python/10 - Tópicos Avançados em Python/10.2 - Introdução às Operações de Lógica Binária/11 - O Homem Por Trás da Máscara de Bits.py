def check_bit4(entrada):
    mask = 0b1000
    
    if entrada & mask:
        return "ativo"
    else:
        return "inativo"

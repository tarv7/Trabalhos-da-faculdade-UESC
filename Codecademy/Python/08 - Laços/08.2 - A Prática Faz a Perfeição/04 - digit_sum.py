def digit_sum(n):
    soma = 0
    
    while n > 0:
        soma += n % 10
        n /= 10
        
    return soma

def flip_bit(number, n):
    result = 1 << n-1
    result = number ^ result
    
    return bin(result)

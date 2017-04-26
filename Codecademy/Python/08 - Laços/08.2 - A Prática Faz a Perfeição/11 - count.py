def count(sequence, item):
    total = 0
    
    for obj in sequence:
        if obj == item:
            total += 1
            
    return total

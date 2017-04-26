n = [[1, 2, 3], [4, 5, 6, 7, 8, 9]]
# Adicione sua funcao aqui
def flatten(lists):
    results = []
    
    for numbers in lists:
        for number in numbers:
            results.append(number)
            
    return results



print flatten(n)

grades = [100, 100, 90, 40, 80, 100, 85, 70, 90, 65, 90, 85, 50.5]

def grades_sum(scores):
    soma = 0
    
    for i in scores:
        soma += i
        
    return soma
    
def grades_average(grades):
    return grades_sum(grades) / float(len(grades))
    
print grades_average(grades)

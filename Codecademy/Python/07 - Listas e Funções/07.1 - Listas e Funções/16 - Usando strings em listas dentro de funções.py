n = ["Michael", "Lieberman"]
# Adicione sua funcao aqui
def join_strings(words):
    result = ""
    
    for palavra in words:
        result = result + palavra
        
    return result


print join_strings(n)

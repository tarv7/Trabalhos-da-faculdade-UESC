inventory = {
    'gold' : 500,
    'pouch' : ['silex', 'barbante', 'pedra preciosa'], # Atribuido uma nova lista a chave 'pouch'
    'backpack' : ['xilofone','adaga', 'saco de dormir','pedaco de pao']
}

# Adicionando uma chave 'burlap bag' a atribuindo uma lista a ela
inventory['burlap bag'] = ['maca', 'pequeno rubi', 'bicho preguica']

# Organizando a lista encontrada sob a chave 'pouch'
inventory['pouch'].sort() 

# Seu codigo aqui
inventory["pocket"] = ["concha", "amora estranha", "sujeira"]
inventory["backpack"].sort()
inventory["backpack"].remove("adaga")
inventory["gold"] += 50

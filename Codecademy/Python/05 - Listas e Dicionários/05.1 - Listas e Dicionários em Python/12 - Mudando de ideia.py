# key - animal_name : value - location 
zoo_animals = { 'Unicornio' : 'Casa de Algodao Doce',
'Preguica' : 'Exibicao da Floresta Tropical',
'Tigre de Bengala' : 'Casa da Selva',
'Fradinho do Atlantico' : 'Exibicao Artica',
'Pinguim Saltador da Rocha' : 'Exibicao Artica'}
# Uma declaracao de dicionario (ou lista) pode ocupar mais de uma linha

# Removendo a entrada 'Unicornio'( Unicornios sao incrivelmente caros).
del zoo_animals['Unicornio']

# Seu codigo aqui!
del zoo_animals["Preguica"]
del zoo_animals["Tigre de Bengala"]
zoo_animals["Pinguim Saltador da Rocha"] = "Amazônia kkkk"


print zoo_animals

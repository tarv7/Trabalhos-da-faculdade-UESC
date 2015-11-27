
inicio
    Inteiro km
    Caracter tipo
    
    Escrever "Digite a distancia do percuso em KM e o tipo de carro(A, B ou C): \n"
    Ler km, tipo
    
        Se(tipo = "A" ou tipo = "a")Entao
            Escrever "O consumo estimado da viagem é de ", km / 12, " litros."
        FimSe
        Se((tipo = "B") ou (tipo = "b"))Entao
            Escrever "O consumo estimado da viagem é de ", km / 9, " litros."
        FimSe
        Se((tipo = "C") ou (tipo = "c"))Entao
            Escrever "O consumo estimado da viagem é de ", km / 8, " litros."
        FimSe
fim

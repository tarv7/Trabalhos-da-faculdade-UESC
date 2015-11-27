inicio
    Inteiro n, cont, j, fat, soma_fat
    fat <- 1
    
    Escrever "Digite 15 números inteiros: \n"
    Para cont de 1 ate 15 passo 1
        Ler n
        Para j de 1 ate n passo 1
            fat <- fat * j
        Proximo
        soma_fat <- soma_fat + fat
        fat <- 1
    Proximo
    Escrever "O somatorio dos fatoriais é ", soma_fat
fim

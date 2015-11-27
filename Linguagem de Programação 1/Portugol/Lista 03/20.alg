inicio
    Inteiro n, m, aux, soma, mult, cont
    
    Escrever "Digite o número inicial e o numero final, respectivamente: "
    Ler n, m
    Se(n > m)Entao
        aux <- n
        n <- m
        m <- aux
    FimSe
    mult <- 1
    Para cont de n ate m passo 1
        Se(cont % 2 = 0)Entao
            soma <- soma + cont
        Senao
            mult <- mult * cont
        FimSe
    Proximo
    Escrever "Soma dos números pares: ", soma, "\n"
    Escrever "Multiplicação dos números impares: ", mult, "\n"
fim

inicio
    Inteiro n, m, aux, soma, mult, cont
    
    Escrever "Digite o n�mero inicial e o numero final, respectivamente: "
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
    Escrever "Soma dos n�meros pares: ", soma, "\n"
    Escrever "Multiplica��o dos n�meros impares: ", mult, "\n"
fim

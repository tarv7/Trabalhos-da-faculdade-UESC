inicio
    Inteiro n, maior, menor
    menor <- 999999999999
    Repete
        Escrever "Digite um número: "
        Ler n
        Se(n > maior)Entao
            maior <- n
        FimSe
        Se(n < menor e n >= 0)Entao
            menor <- n
        FimSe
    Ate(n < 0)
    Escrever "Maior: ", maior, "\n"
    Escrever "Menor: ", menor, "\n"
fim

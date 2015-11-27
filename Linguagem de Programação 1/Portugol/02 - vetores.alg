inicio
    Inteiro i, a[10], b[10]
    
    Escrever "Digite 10 números inteiros: "
    Para i de 0 ate 4 passo 1
        Ler a[i]
    Proximo
    Para i de 0 ate 4 passo 1
        Se(i % 2 = 0)Entao
            b[i] <- a[i] * 5
        Senao
            b[i] <- a[i] + 5
        FimSe
        Escrever "Vetor B: ", b[i], "\n"
    Proximo
fim
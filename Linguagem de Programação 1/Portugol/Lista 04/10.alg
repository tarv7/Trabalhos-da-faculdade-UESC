inicio
    Inteiro A[6], B[6], C[6], D[6], i, imp, par
    imp <- 0
    par <- 0
    Escrever "Digite os elementos da matriz A: "
    Para i de 0 ate 5 passo 1
        Ler A[i]
        Se(i % 2 = 1)Entao
            C[imp] <- A[i]
            imp <- imp + 1
        Senao
            D[par] <- A[i]
            par <- par + 1
        FimSe
    Proximo
    Escrever "Digite os elementos da matriz B: "
    Para i de 0 ate 5 passo 1
        Ler B[i]
        Se(i % 2 = 1)Entao
            C[imp] <- B[i]
            imp <- imp + 1
        Senao
            D[par] <- B[i]
            par <- par + 1
        FimSe
    Proximo
    Para i de 0 ate 5 passo 1
        Escrever "C[", i + 1, "] = ", C[i], "\n"
        Escrever "D[", i + 1, "] = ", D[i], "\n"
    Proximo
fim

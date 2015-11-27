inicio
    Inteiro A[15], B[15], C[30], i
    Escrever "Digite os valores da matriz A: "
    Para i de 0 ate 14 passo 1
        Ler A[i]
        C[i] <- A[i]
    Proximo
    Escrever "Digite os valores da matriz B: "
    Para i de 0 ate 14 passo 1
        Ler B[i]
        C[i + 15] <- B[i]
    Proximo
    Para i de 0 ate 29 passo 1
        Escrever "C[", i + 1, "] = ", C[i], "\n"
    Proximo    
fim

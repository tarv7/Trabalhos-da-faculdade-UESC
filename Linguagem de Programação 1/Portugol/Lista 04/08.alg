inicio
    inteiro A[5], B[5], C[5], D[15], i
    Escrever "Digite os valores da matriz A: "
    Para i de 0 ate 4 passo 1
        Ler A[i]
        D[i] <- A[i]
    Proximo
    Escrever "Digite os valores da matriz B: "
    Para i de 0 ate 4 passo 1
        Ler B[i]
        D[i + 5] <- B[i]
    Proximo
    "Digite os valores da matriz C: "    
    Para i de 0 ate 4 passo 1
        Ler C[i]
        D[i + 10] <- C[i]
    Proximo
    
    Para i de 0 ate 14 passo 1
        Escrever "D[", i + 1, "] = ", D[i], "\n"
    Proximo
fim
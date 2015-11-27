inicio
    Inteiro A[20], B[20], i
    Escrever "Digite os valores da matriz A: "
    Para i de 0 ate 19 passo 1
        Ler A[i]
        B[19 - i] <- A[i]
    Proximo
    Para i de 0 ate 19 passo 1
        Escrever "A[", i + 1, "] = ", A[i], "\n"
        Escrever "B[", i + 1, "] = ", B[i], "\n\n"
    Proximo
fim

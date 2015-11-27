inicio
    inteiro A[15], B[15], i, j
    Escrever "Digite os valores da matriz A: "
    Para i de 0 ate 4 passo 1
        Ler A[i]
        B[i] <- 1
        Para j de 1 ate A[i] passo 1
            B[i] <- B[i] * j
        Proximo
    Proximo
    Para i de 0 ate 4 passo 1
        Escrever "!", A[i], " = ", B[i], "\n"
    Proximo
fim
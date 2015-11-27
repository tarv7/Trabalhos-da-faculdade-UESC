inicio
    Inteiro A[20], B[20], C[20], i
    Escrever "Digite o valor da matriz A: "
    Para i de 0 ate 19 passo 1
        Ler A[i]
    Proximo
    Escrever "Digite o valor da  matriz B: "
    Para i de 0 ate 19 passo 1
        Ler B[i]
    Proximo
    Para i de 0 ate 19 passo 1
        C[i] <- A[i] - B[i]
        Escrever "C[", i + 1, "] = ", C[i], "\n"
    Proximo
fim

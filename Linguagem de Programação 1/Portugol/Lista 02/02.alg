
inicio
    Inteiro n1, n2
    
    Escrever "Digite qualquer n�mero inteiro: "
    Ler n1
    
    Se(n1 =/= 0)Entao
        Se(n1 < 0)Entao
            n2 <- n1 * -1
        Senao
            n2 <- n1
        FimSe
        Escrever "|", n1, "| = ", n2
    Senao
        Escrever "O n�mero � zero."
    FimSe
    
fim

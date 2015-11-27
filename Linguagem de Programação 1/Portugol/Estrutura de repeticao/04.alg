
inicio
    Inteiro x
    Caracter resp
    
    resp <- "S"
    
    Repete
        Escrever "Digite X: "
        Ler x
        x <- x * 3
        Escrever x, "\n"
        Escrever "Deseja continuar?[S/N] "
        Ler resp
    Ate(resp =/= "S" e resp =/= "s")
fim

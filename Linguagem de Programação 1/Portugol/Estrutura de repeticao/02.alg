inicio
    Inteiro count, x
    Caracter resp
    
    count <- 1
    resp <- "S"
    
    Enquanto ((resp = "S") ou (resp = "s"))Faz
        Escrever "Digite um n�mero: "
        Ler x
        x <- x * 3
        Escrever x, "\n"
        Escrever "Deseja continuar? "
        Ler resp
    FimEnquanto
fim

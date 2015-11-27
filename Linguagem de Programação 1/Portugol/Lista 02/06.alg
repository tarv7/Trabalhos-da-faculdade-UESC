
inicio
    Texto nome
    Caracter sexo
    
    Escrever "Digite o nome: "
    Ler nome
    
    Escrever "Digite o sexo:[F/M] "
    Ler sexo
    
    Se((sexo = "F") ou (sexo = "f") ou (sexo = "m") ou (sexo = "M"))Entao
        Se((sexo = "F") ou (sexo = "f"))Entao
            Escrever "Ilma Sra.\n"
            Escrever nome
        Senao
            Escrever "Ilmo Sr.\n"
            Escrever nome
        FimSe
    Senao
        Escrever "Sexo inválido."
    FimSe
fim

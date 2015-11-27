
inicio
    Texto livro
    Caracter tipo_usu
    
    Escrever "Digite o nome do livro a ser adquirido: "
    Ler livro
    
    Escrever "Digite se p usuário é professor ou aluno:[P/A] "
    Ler tipo_usu
    
    Se((tipo_usu = "P") ou (tipo_usu = "p") ou (tipo_usu = "A") ou (tipo_usu = "a"))Entao
        Se((tipo_usu = "P") ou (tipo_usu = "p"))Entao
            Escrever "O professor terá 10 dias para devolução do livro ", livro, "."
        FimSe
        Se((tipo_usu = "A") ou (tipo_usu = "a"))Entao
            Escrever "O aluno terá 3 dias para devolução do livro ", livro, "."
        FimSe
    Senao
        Escrever "Usuário inválido."
    FimSe
fim


inicio
    Texto livro
    Caracter tipo_usu
    
    Escrever "Digite o nome do livro a ser adquirido: "
    Ler livro
    
    Escrever "Digite se p usu�rio � professor ou aluno:[P/A] "
    Ler tipo_usu
    
    Se((tipo_usu = "P") ou (tipo_usu = "p") ou (tipo_usu = "A") ou (tipo_usu = "a"))Entao
        Se((tipo_usu = "P") ou (tipo_usu = "p"))Entao
            Escrever "O professor ter� 10 dias para devolu��o do livro ", livro, "."
        FimSe
        Se((tipo_usu = "A") ou (tipo_usu = "a"))Entao
            Escrever "O aluno ter� 3 dias para devolu��o do livro ", livro, "."
        FimSe
    Senao
        Escrever "Usu�rio inv�lido."
    FimSe
fim

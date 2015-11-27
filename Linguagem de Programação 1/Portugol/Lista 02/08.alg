
inicio
    Texto nome
    Caracter sexo
    Real n1, n2, media
    
    Escrever "Digite nome, sexo[F/M] e 2 notas em LP1: \n"
    Ler nome, sexo, n1, n2
    
    Se((sexo = "F") ou (sexo = "f") ou (sexo = "M") ou (sexo = "m"))Entao
        Se((n1 < 0) ou (n1 > 10) ou (n2 < 0) ou (n2 > 10))Entao
            Escrever "Notas invalida"
        Senao
            media <- (n1 + n2) / 2
            Se(media < 5)Entao
                Escrever "Aluno REPROVADO, nota ", media
            FimSe
            Se((media >= 5) e (media <= 8))Entao
                Escrever "Aluno REGULAR, nota ", media
            FimSe
            Se(media > 8)Entao
                Escrever "Aluno teve BOM rendimento, nota ", media
            FimSe
        FimSe
    Senao
        Escrever "Sexo inválido"
    FimSe
fim

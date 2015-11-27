
inicio
    Real n1, n2, n3, n4, media
    
    Escrever "Digite as 4 notas: \n"
    Ler n1, n2, n3, n4
    
    media <- (n1 + n2 + n3 + n4) / 4
    
    Se((n1 <= 0 e n1 >= 10) e (n2 <= 0 e n2 >= 10) e(n3 <= 0 e n3 >= 10) e(n4 <= 0 e n4 >= 10))Entao
        Se(media >= 5)Entao
            Escrever "Aluno APROVADO com média ", media
        Senao
            Escrever "Aluno REPROVADO com média ", media
        FimSe
    Senao
        Escrever "Essas notas não existem!"
    FimSe
fim

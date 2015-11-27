
inicio
    Real n1, n2, n3, n4, media
    
    Escrever "Digite as notas escolares: "
    Ler n1, n2, n3, n4
    
    Se((n1 < 0) ou (n2 < 0) ou (n3 < 0) ou (n4 < 0))Entao
        Escrever "Nota(s) inválida(s)."
    Senao
        media <- (n1 + n2 + n3 + n4) / 4
        Se(media >= 5)Entao
            Escrever "APROVADO com nota ", media
        Senao
            Escrever "REPROVADO com nota ", media
        FimSe
    FimSe
fim

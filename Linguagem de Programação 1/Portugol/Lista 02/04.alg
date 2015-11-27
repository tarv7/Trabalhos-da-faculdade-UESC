
inicio
    Real n1, n2, n_exame, media
    
    Escrever "Digite 2 notas escolares: \n"
    Ler n1, n2
    
    // Verifica se as notas são validas
    Se((n1 < 0) ou (n2 < 0) ou (n1 > 10) ou (n2 > 10))Entao
        Escrever "Nota(s) inválida(s)."
    Senao
        media <- (n1 + n2) / 2
        //Verifica a media SEM exame
        Se(media >= 7)Entao
            Escrever "Aluno APROVADO sem exame, com a média de ", media, " pontos."
        Senao
            Escrever "Digite a nota do exame: "
            Ler n_exame
            
            //Verifica se a nota do exame é valida - uso do NAO -
            Se nao((n_exame < 0) ou (n_exame > 10))Entao
                media <- (media + n_exame) / 2
                //Verifica a nova média
                Se(media >= 5)Entao
                    Escrever "Aluno APROVADO com exame, com a média de ", media, " pontos."
                Senao
                    Escrever "Aluno REPROVADO, com a média de ", media, " pontos."
                FimSe
            FimSe
        FimSe
    FimSe
fim

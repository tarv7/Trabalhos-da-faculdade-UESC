
inicio
    Inteiro vel_max, vel_mot
    
    Escrever "Digite a velocidade máxima da avenida e a velocidade do motorista: \n"
    Ler vel_max, vel_mot
    
    Se((vel_max > 0) ou (vel_mot > 0))Entao
        Se(vel_mot <= vel_max)Entao
            Escrever "O motorista está dentro da lei."
        Senao
            Se(vel_mot <= vel_max + 10)Entao
                Escrever "Multa de R$50.00"
            Senao
                Se(vel_mot <= vel_max + 30)Entao
                    Escrever "Multa de R$100.00"
                Senao
                    Escrever "Multa de R$200.00"
                FimSe
            FimSe
        FimSe
    Senao
        Escrever "Velocidade(s) inválida(s)."
    FimSe
fim

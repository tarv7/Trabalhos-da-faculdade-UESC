
inicio
    Inteiro a, b, c
    
    Escrever "Digite os lados do tri�ngulo: \n"
    Ler a, b, c
    
    Se((a < b + c) e (b < a + c) e (c < a + b))Entao
        Se((a = b) e (b = c))Entao
            Escrever "� um triangulo equil�tero!"
        Senao
            Se((a =/= b) e (b =/= c))Entao
                Escrever "� um tri�ngulo escaleno!"
            Senao
                Escrever "� um tri�ngulo is�celes!"
            FimSe
        FimSe
    Senao
        Escrever "N�o � um tri�ngulo!"
    FimSe
fim

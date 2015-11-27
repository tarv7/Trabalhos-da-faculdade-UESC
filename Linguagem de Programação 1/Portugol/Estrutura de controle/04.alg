
inicio
    Inteiro a, b, c
    
    Escrever "Digite os lados do triângulo: \n"
    Ler a, b, c
    
    Se((a < b + c) e (b < a + c) e (c < a + b))Entao
        Se((a = b) e (b = c))Entao
            Escrever "É um triangulo equilátero!"
        Senao
            Se((a =/= b) e (b =/= c))Entao
                Escrever "É um triângulo escaleno!"
            Senao
                Escrever "É um triângulo isóceles!"
            FimSe
        FimSe
    Senao
        Escrever "Não é um triângulo!"
    FimSe
fim

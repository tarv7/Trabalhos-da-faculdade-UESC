
inicio
    Real salario
    
    Escrever "Digite o sal�rio: R$"
    Ler salario
    
    Se (salario < 500)Entao
        salario <- salario * 1.15
    Senao
        Se (salario >= 500 E salario <= 1000)Entao
            salario <- salario * 1.1
        Senao
            Se (salario > 1000)Entao
                salario <- salario * 1.05
            FimSe
        FimSe
    FimSe
    Escrever "O sal�rio novo valor do sal�rio com o reajuste � R$", salario
fim

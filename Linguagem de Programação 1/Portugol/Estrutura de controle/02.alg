
inicio
    Variavel inteiro n1, n2, soma
    
    Escrever "Digite dois n�meros inteiros: "
    Ler n1, n2
    
    soma <- n1 + n2    
    Se (soma >= 10) Entao
        soma <- soma + 5
        Escrever n1, " + ", n2, " + 5 = ", soma
    Senao
        soma <- soma - 7
        Escrever n1, " + ", n2, " - 7 = ", soma
    FimSe
fim

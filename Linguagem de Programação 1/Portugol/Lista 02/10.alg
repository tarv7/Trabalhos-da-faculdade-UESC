
inicio
    Inteiro hom1, hom2, mul1, mul2, hom_maior, hom_menor, mul_maior, mul_menor
    
    Escrever "Digite a idade de 2 homens: \n"
    Ler hom1, hom2
    
    Escrever "Digite a idade de 2 mulheres: \n"
    Ler mul1, mul2
    
    Se((hom1 =/= hom2) e (hom2 =/= mul1) e (mul1 =/= mul2))Entao
        Se(hom1 > hom2)Entao
            hom_maior <- hom1
            mul_menor <- hom2
        Senao
            hom_maior <- hom2
            hom_menor <- hom1
        FimSe
        
        Se(mul1 > mul2)Entao
            mul_maior <- mul1
            mul_menor <- mul2
        Senao
            mul_maior <- mul2
            mul_menor <- mul1
        FimSe
        
        Escrever "A soma das idades do homem mais velho com a mulher mais nova é ", hom_maior + mul_menor,"\n"
        Escrever "O produto das idades do homem mais novo com a mulher mais velha é ", hom_menor * mul_maior,"\n"
    Senao
        Escrever "As idades tem que ser diferentes."
    FimSe
fim

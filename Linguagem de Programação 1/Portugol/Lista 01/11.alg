
inicio
    Variavel real valor_aula, sal_liquido
    Variavel inteiro num_aula, desconto
    Variavel Texto nome
    
    Escrever "Nome do professor: "
    Ler nome
    
    Escrever "Valor da hora aula:(R$) "
    Ler valor_aula
    
    Escrever "Número de aulas dadas no mês: "
    Ler num_aula
    
    Escrever "Percentual de desconto do INSS:(%) "
    Ler desconto
    
    sal_liquido <- ((valor_aula * num_aula) / 100) * (100 - desconto)
    
    Escrever "Salário líquido de ", sal_liquido
fim

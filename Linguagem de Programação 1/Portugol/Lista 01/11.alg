
inicio
    Variavel real valor_aula, sal_liquido
    Variavel inteiro num_aula, desconto
    Variavel Texto nome
    
    Escrever "Nome do professor: "
    Ler nome
    
    Escrever "Valor da hora aula:(R$) "
    Ler valor_aula
    
    Escrever "N�mero de aulas dadas no m�s: "
    Ler num_aula
    
    Escrever "Percentual de desconto do INSS:(%) "
    Ler desconto
    
    sal_liquido <- ((valor_aula * num_aula) / 100) * (100 - desconto)
    
    Escrever "Sal�rio l�quido de ", sal_liquido
fim

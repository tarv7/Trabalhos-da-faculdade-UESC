// Autor: Thales Augusto
// Ciência da Computação - UESC - 1º Semestre
inicio
    // declara as variáveis
    variavel real valor, prestacao, taxa, tempo
    
    Escrever "********** Calculo de prestação em atraso ***********\n"
    
    Escrever "Qual o valor da prestação? R$"
    Ler valor
    
    Escrever "Qual a taxa de juros mensal?(em %) "
    Ler taxa
    
    Escrever "Quantos meses de atraso? "
    Ler tempo
    
    // Fórmula da prestacao
    prestacao <- valor + (valor * (taxa / 100) * tempo)
    
    // Saída para usuário com informação útil da prestação
    Escrever "A prestação está no valor de R$", prestacao
fim

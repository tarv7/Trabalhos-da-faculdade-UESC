// Autor: Thales Augusto
// Ci�ncia da Computa��o - UESC - 1� Semestre
inicio
    // declara as vari�veis
    variavel real valor, prestacao, taxa, tempo
    
    Escrever "********** Calculo de presta��o em atraso ***********\n"
    
    Escrever "Qual o valor da presta��o? R$"
    Ler valor
    
    Escrever "Qual a taxa de juros mensal?(em %) "
    Ler taxa
    
    Escrever "Quantos meses de atraso? "
    Ler tempo
    
    // F�rmula da prestacao
    prestacao <- valor + (valor * (taxa / 100) * tempo)
    
    // Sa�da para usu�rio com informa��o �til da presta��o
    Escrever "A presta��o est� no valor de R$", prestacao
fim

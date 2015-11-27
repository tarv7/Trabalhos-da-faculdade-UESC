// Autor: Thales Augusto
// Ciência da Computação - UESC - 1º Semestre
inicio
    // Declaração de variáveis
    variavel real dolares, reais, cotacao
    
    Escrever "********** Conversão de US$ para R$ **********\n"
    
    Escrever "Quantos dólares você tem? "
    Ler dolares
    
    Escrever "Quanto está a cotação atual do dolar? "
    Ler cotacao
    
    // Realização do câmbio
    reais <- dolares * cotacao
    
    // Saída útil para o usuário
    Escrever "US$", dolares, " equivale a R$", reais, "."
fim

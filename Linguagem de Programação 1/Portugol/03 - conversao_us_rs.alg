// Autor: Thales Augusto
// Ci�ncia da Computa��o - UESC - 1� Semestre
inicio
    // Declara��o de vari�veis
    variavel real dolares, reais, cotacao
    
    Escrever "********** Convers�o de US$ para R$ **********\n"
    
    Escrever "Quantos d�lares voc� tem? "
    Ler dolares
    
    Escrever "Quanto est� a cota��o atual do dolar? "
    Ler cotacao
    
    // Realiza��o do c�mbio
    reais <- dolares * cotacao
    
    // Sa�da �til para o usu�rio
    Escrever "US$", dolares, " equivale a R$", reais, "."
fim

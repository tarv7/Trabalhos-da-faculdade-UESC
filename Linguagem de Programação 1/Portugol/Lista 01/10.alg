
inicio
    Variavel inteiro num, n1, n2, n3
    
    Escrever "Digite um n�mero de 3 d�gitos: "
    Ler num
    
    n1 <- num / 100
    n2 <- (num % 100) / 10
    n3 <- (num % 100) - (n2 * 10)
    
    num <- (n3 * 100) + (n2 * 10) + n1
    
    Escrever "O n�mero invertido � ", num
fim

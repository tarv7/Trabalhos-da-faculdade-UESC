
inicio
    Variavel inteiro num, n1, n2, n3
    
    Escrever "Digite um número de 3 dígitos: "
    Ler num
    
    n1 <- num / 100
    n2 <- (num % 100) / 10
    n3 <- (num % 100) - (n2 * 10)
    
    num <- (n3 * 100) + (n2 * 10) + n1
    
    Escrever "O número invertido é ", num
fim

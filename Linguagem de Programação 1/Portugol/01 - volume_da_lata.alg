// Autor: Thales Augusto
// Ciência da Computação - UESC - 1º Semestre
inicio
    //Declarações de variáveis e constantes
    variavel real volume, raio, altura
    constante real pi <- 3.14159
    
    Escrever "********** Calcular volume da lata de óleo **********\n"
    Escrever "Digite as seguintes características da lata de óleo.\n"
    
    Escrever "Raio (cm): "
    Ler raio
    
    Escrever "Altura (cm): "
    Ler altura
    
    // Fórmula do volume da lata
    volume <- pi * raio ^ 2 * altura
    
    // Saída para usuário
    Escrever "O volume da lata de óleo é igual a ", volume, "cm³"
fim

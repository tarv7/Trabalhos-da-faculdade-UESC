// Autor: Thales Augusto
// Ci�ncia da Computa��o - UESC - 1� Semestre
inicio
    //Declara��es de vari�veis e constantes
    variavel real volume, raio, altura
    constante real pi <- 3.14159
    
    Escrever "********** Calcular volume da lata de �leo **********\n"
    Escrever "Digite as seguintes caracter�sticas da lata de �leo.\n"
    
    Escrever "Raio (cm): "
    Ler raio
    
    Escrever "Altura (cm): "
    Ler altura
    
    // F�rmula do volume da lata
    volume <- pi * raio ^ 2 * altura
    
    // Sa�da para usu�rio
    Escrever "O volume da lata de �leo � igual a ", volume, "cm�"
fim

// Autor: Thales Augusto
// Ciência da Computação - UESC - 1º Semestre
inicio
    // Declaração de variáveis
    variavel real volume, comp, largura, altura
    
    Escrever "********** Calcular volume da caixa **********"
    
    Escrever "Qual o comprimento da caixa?(cm) "
    Ler comp
    
    Escrever "Qual a largura da caixa?(cm) "
    Ler largura
    
    Escrever "Qual a altura da caixa?(cm) "
    Ler altura
    
    // Fórmula de volume
    volume <- comp * largura * altura
    
    // Saída para usuário com o volume da caixa
    Escrever "O volume da caixa é de ", volume, "cm³."
fim


inicio
    Texto cidade
    Inteiro quant_eleitor, num_votos
    
    Escrever "Digite o nome da cidade: "
    Ler cidade

    Escrever "Digite a quantidade de elitores aptos a votar: "
    Ler quant_eleitor
    
    Escrever "Digite o total de votos do candidato mais votado: "
    Ler num_votos
    
    Se(quant_eleitor > 20000)Entao
        Se(num_votos >= quant_eleitor / 2)Entao
            Escrever "Ele tem direito a 2� turno."
        Senao
            Escrever "Ele N�O tem direito a 2� turno."
        FimSe
    Senao
        Se(quant_eleitor <= 0)Entao
            Escrever "Quantidade de eleitores inv�lida."
        Senao
            Escrever "A cidade ", cidade, " n�o tem segundo turno."
        FimSe
    FimSe
fim

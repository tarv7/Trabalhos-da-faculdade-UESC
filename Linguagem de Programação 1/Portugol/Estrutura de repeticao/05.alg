
inicio
    Inteiro fat, cont, n
    Caracter resp
    
    resp <- "S"
    
    //Repetir at� usu�rio desejar
    Repete
        Escrever "Qual o fatorial voc� quer? "
        Ler n
        fat <- 1
        //Loop para fatorial
        Para cont de 1 ate n passo 1
            fat <- fat * cont
        Proximo
        Escrever fat, "\n"
        
        //Pergunta para continuar
        Escrever "Deseja para?[S/N] "
        Ler resp
    Ate(resp =/= "S" e resp =/= "s")
fim

inicio
    Texto nome, expe
    Inteiro cont, idade, num, quant_can, total_exp, total_exp_30, total_exp_30mais
    Real idade_med
    
    Para cont de 1 ate 50 passo 1
        Escrever "Digite o n�mero, nome, idade e experi�ncia profissional(sim/n�o) do candidato, respectivamente: "
        Ler num, nome, idade, expe
        quant_can <- quant_can + 1
        idade_med <- (((quant_can - 1) * idade_med) + idade) / quant_can
        Se(expe = "sim")Entao
            total_exp <- total_exp + 1
            Se(idade <= 30)Entao
                total_exp_30 <- total_exp_30 + 1
            Senao
                total_exp_30mais <- total_exp_30mais + 1
            FimSe
        FimSe
    Proximo
    Escrever "Idade m�dia dos candidatos: ", idade_med, "\n"
    Escrever "Total de candidatos com experi�ncia: ", total_exp, "\n"
    Escrever "Total de candidatos com experi�ncia e idade at� 30 anos: ", total_exp_30, "\n"
    Escrever "Total de candidatos com experi�ncia e idade acima de 30 anos: ", total_exp_30mais
fim
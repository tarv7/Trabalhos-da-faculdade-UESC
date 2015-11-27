inicio
    Texto comodo, resp
    Inteiro cont
    Real larg, comp, tot
    
    Repete
        Escrever "Digite o nome do cômodo: "
        Ler comodo
        Escrever "Digite a largura e o comprimento, repectivamente:[M] "
        Ler larg, comp
        tot <- tot + (larg * comp)
        Escrever "A área total do cômodo ", comodo, " é igual a ", larg * comp, "m²\n"
        Escrever "Deseja continuar?[SIM/NÃO] "
        Ler resp
    Ate(resp = "NÃO" ou resp = "não")
    Escrever "Área total da casa: ", tot
fim

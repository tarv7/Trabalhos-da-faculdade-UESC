inicio
    Texto comodo, resp
    Inteiro cont
    Real larg, comp, tot
    
    Repete
        Escrever "Digite o nome do c�modo: "
        Ler comodo
        Escrever "Digite a largura e o comprimento, repectivamente:[M] "
        Ler larg, comp
        tot <- tot + (larg * comp)
        Escrever "A �rea total do c�modo ", comodo, " � igual a ", larg * comp, "m�\n"
        Escrever "Deseja continuar?[SIM/N�O] "
        Ler resp
    Ate(resp = "N�O" ou resp = "n�o")
    Escrever "�rea total da casa: ", tot
fim


inicio
    Variavel inteiro num_conta, num_banco, num_agencia
    Variavel real cheques_deb, cheques_cred, lim_cred, saldo, saldo_disp
    
    Escrever "Digite o número da conta: "
    Ler num_conta
    
    Escrever "Digite o número do banco: "
    Ler num_banco
    
    Escrever "Digite o número da agência: "
    Ler num_agencia
    
    Escrever "Digite o valor total de cheques a debitar: "
    Ler cheques_deb
    
    Escrever "Digite o total de cheques a creditar: "
    Ler cheques_cred
    
    Escrever "Digite o limite de crédito: "
    Ler lim_cred
    
    Escrever "Digite o saldo atual: "
    Ler saldo
    
    saldo_disp <- (saldo + cheques_cred + lim_cred) - cheques_deb
    
    Escrever "O número da conta é ", num_conta, "\n"
    Escrever "O saldo disponível é R$", saldo_disp
fim

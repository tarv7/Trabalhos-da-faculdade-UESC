inicio
    Inteiro i, a[5], soma
    
    Escrever "Digite 5 números: "
    Para i de 0 ate 4 passo 1
        Ler a[i]
        Se(a[i] % 2 = 1)Entao
            soma <- soma + a[i]
        FimSe
    Proximo
    Escrever "Soma dos impares: ", soma
fim
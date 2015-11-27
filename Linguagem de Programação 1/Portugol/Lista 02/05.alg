//Autor: Thales Augusto
//Ciência da Computação - UESC 2015.1
inicio
    Inteiro n1, n2, n3, n4, n5, maior, menor
    
    Escrever "Digite 5 números: \n"
    Ler n1, n2, n3, n4, n5
    
    //Verificação inicial
    Se(n1 >= n2)Entao
        maior <- n1
        menor <- n2
    Senao
        maior <- n2
        menor <- n1
    FimSe
    
    //Atribui maior
    Se(maior < n3)Entao
        maior <- n3
    FimSe
    Se(maior < n4)Entao
        maior <- n4
    FimSe
    Se(maior < n5)Entao
        maior <- n5
    FimSe
    
    //Atribui menor
    Se(menor > n3)Entao
        menor <- n3
    FimSe
    Se(menor > n4)Entao
        menor <- n4
    FimSe
    Se(menor > n5)Entao
        menor <- n5
    FimSe
    
    Escrever "Maior: ", maior, "\nMenor: ", menor
fim

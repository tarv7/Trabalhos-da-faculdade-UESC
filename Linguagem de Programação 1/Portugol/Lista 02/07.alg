
inicio
    Texto nome
    Inteiro idade, anos_prof
    
    Escrever "Digite o nome do professor: "
    Ler nome
    
    Escrever "Digite a idade de ", nome
    Ler idade
    
    Escrever "Digite o total de anos de profiss�o de ", nome, "\n"
    Ler anos_prof
Se nao(idade <= 0)Entao
    Se((idade < 18) ou (idade > 70))Entao
        Escrever "Idade inv�lida."
    Senao
        Se(idade - anos_prof >= 18)Entao
            Se(anos_prof <= 2)Entao
                Escrever "Professor novato."
            FimSe
            Se((anos_prof >= 3) e (anos_prof <= 30))Entao
                Escrever "Professor experiente."
            FimSe
            Se(anos_prof > 30)Entao
                Escrever "O professor j� pode se aposentar."
            FimSe
        Senao
            Escrever "A idade n�o compensa os anos de profiss�o."
        FimSe
    FimSe
Senao
    Escrever "Idade inv�lida"
FimSe
fim

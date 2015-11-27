
inicio
    Texto nome
    Inteiro idade, anos_prof
    
    Escrever "Digite o nome do professor: "
    Ler nome
    
    Escrever "Digite a idade de ", nome
    Ler idade
    
    Escrever "Digite o total de anos de profissão de ", nome, "\n"
    Ler anos_prof
Se nao(idade <= 0)Entao
    Se((idade < 18) ou (idade > 70))Entao
        Escrever "Idade inválida."
    Senao
        Se(idade - anos_prof >= 18)Entao
            Se(anos_prof <= 2)Entao
                Escrever "Professor novato."
            FimSe
            Se((anos_prof >= 3) e (anos_prof <= 30))Entao
                Escrever "Professor experiente."
            FimSe
            Se(anos_prof > 30)Entao
                Escrever "O professor já pode se aposentar."
            FimSe
        Senao
            Escrever "A idade não compensa os anos de profissão."
        FimSe
    FimSe
Senao
    Escrever "Idade inválida"
FimSe
fim

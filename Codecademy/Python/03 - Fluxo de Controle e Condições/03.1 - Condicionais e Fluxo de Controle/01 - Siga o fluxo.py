def clinic():
    print "Voce acabou de entrar na clinica!"
    print "Voce entra pela porta a esquerda (left) ou a direita (right)?"
    answer = raw_input("Digite left (esquerda) ou right (direita) e pressione 'Enter'.").lower()
    if answer == "left" or answer == "l":
        print "Esta e a sala de Abuso Verbal, seu monte de caca de papagaio!"
    elif answer == "right" or answer == "r":
        print "E claro que esta e a Sala das Discussoes. Eu ja disse isso!"
    else:
        print "Voce nao escolheu esquerda ou direita. Tente de novo."
        clinic()

clinic()

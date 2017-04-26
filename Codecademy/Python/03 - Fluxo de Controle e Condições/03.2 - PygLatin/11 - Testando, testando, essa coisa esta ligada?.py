pyg = 'ay'

original = raw_input('Enter a word:')

#condição para saber se o input do usuário está válido
if len(original) > 0 and original.isalpha():
    word = original.lower()
    first = word[0]
    #Criando a própria PygLatim
    new_word = word[1:len(new_word)] + first + pyg
    print new_word
else:
    print 'empty'

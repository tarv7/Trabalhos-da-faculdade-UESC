print 'Bem-vindo ao Tradutor de Pig Latin!'

# Comece seu codigo aqui!
original = raw_input("Enter a word:")

if len(original) > 0 and original.isalpha():
    print original
else:
    print "empty"

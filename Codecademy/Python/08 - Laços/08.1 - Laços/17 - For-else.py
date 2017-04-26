fruits = ['banana', 'maca', 'laranja', 'tomate', 'pera', 'uva']

print 'Voce tem...'
for f in fruits:
    if f == 'tomate':
        print 'O tomate nao e uma fruta!' # (Na verdade, e sim.)
        break
    print 'A', f
else:
    print 'Uma excelente selecao de frutas!'

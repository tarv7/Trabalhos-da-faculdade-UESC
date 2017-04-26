import random

print "Numeros da Sorte! Serao gerados 3 numeros."
print "Se um deles for um '5', voce perde!"

count = 0
while count < 3:
    num = random.randint(1, 6)
    print num
    if num == 5:
        print "Lamento, voce perdeu!"
        break
    count += 1
else:
    print "Voce ganhou!"

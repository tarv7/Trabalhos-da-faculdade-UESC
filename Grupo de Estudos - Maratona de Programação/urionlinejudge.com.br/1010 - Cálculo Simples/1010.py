p1 = input().split(" ")
p2 = input().split(" ")
print('VALOR A PAGAR: R$ %.2f' % ((int(p1[1]) * float(p1[2])) + (int(p2[1]) * float(p2[2]))))

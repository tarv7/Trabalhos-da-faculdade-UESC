v = input().split(" ")
a, b, c = int(v[0]), int(v[1]), int(v[2])
maiorAB  = (a + b + abs(a - b)) / 2
maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2
print('%i eh o maior' % (maiorABC))

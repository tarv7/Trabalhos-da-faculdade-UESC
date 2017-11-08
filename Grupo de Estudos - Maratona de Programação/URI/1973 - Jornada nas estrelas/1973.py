n = int(raw_input())
x = map(int, raw_input().split(" "))
y = x[:]

saida = {
	"estAtac": 0,
	"naoRoub": 0
}

carn = 0
while carn < len(y):
	if y[carn] > 0:
		y[carn] -= 1
		if y[carn] % 2 != 0:
			if carn > 0:
				carn -= 2
			else:
				break
	else:
		if carn > 0:
			carn -= 2
		else:
			break
	carn += 1

z = []
for i in range(len(y)):
	z.append(x[i] - y[i])
	if(x[i] - y[i] > 0):
		saida["estAtac"] += 1

saida["naoRoub"] = sum(x) - sum(z)

print "%s %s" % (saida["estAtac"], saida["naoRoub"])

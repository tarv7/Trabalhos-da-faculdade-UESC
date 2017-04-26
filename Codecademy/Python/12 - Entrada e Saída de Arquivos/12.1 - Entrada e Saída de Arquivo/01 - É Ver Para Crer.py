my_list = [i**2 for i in range(1,11)]
# Gera uma lista com os quadrados dos números 1 - 10

f = open("output.txt", "w")

for item in my_list:
    f.write(str(item) + "\n")

f.close()

# Abra  o arquivo para leitura
read_file = open("text.txt", "r")

# Use um segundo controlador de arquivo para a abrir o arquivo para escrita
write_file = open("text.txt", "w")
# Escreva no arquivoe
write_file.write("Nao fechar arquivos e MUITO RUIM.")

write_file.close()

# Tente ler o conteudo do arquivo
print read_file.read()
read_file.close()

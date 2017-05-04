other_file = open("text.txt", "w")
other_file.write("I'm the first line of the file!\n");
other_file.write("I'm the second line.\n");
other_file.write("Third line here, boss.\n");
other_file.close()
my_file = open("text.txt", "r")
print my_file.readline()
print my_file.readline()
print my_file.readline()
my_file.close()

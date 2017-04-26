def using_control_once():
    if 1 < 2:
        return "Successo #1"

def using_control_again():
    if not False or False:
        return "Successo #2"

print using_control_once()
print using_control_again()

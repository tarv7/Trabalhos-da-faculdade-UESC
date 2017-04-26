def anti_vowel(text):
    text2 = ""
    
    for char in text:
        if char != 'a' and char != 'A' and \
        char != 'e' and char != 'E' and \
        char != 'i' and char != 'I' and \
        char != 'o' and char != 'O' and \
        char != 'u' and char != 'U':
            text2 = text2 + char
            
    return text2

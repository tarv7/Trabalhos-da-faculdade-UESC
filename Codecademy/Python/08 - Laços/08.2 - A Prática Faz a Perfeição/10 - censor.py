def censor(text, word):
    index = text.index(word)
    l = len(word)
    text = str.replace(text, word, '*' * l)
    return text

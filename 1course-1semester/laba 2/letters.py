def letter(word):
    word_low = word.lower()
    symbol_1 = "'"
    symbol_2 = '"'
    symbol_3 = '1234567890 +-*/|\=-_()[]{}?!.,:;@#$%^<>`~№«»©~¡¢£¤¥¦§®¿×÷˄˅'
    alphabet = f'{symbol_1}{symbol_2}{symbol_3}'
    letters = dict()
    for c in word_low:
        if c in alphabet:
            pass
        else:
            letters[c] = letters.get(c, 0) + 1
    for key, value in letters.items():
        print(f'{key} = {value}')


text = str(input('Ведіть текст: '))
letter(text)

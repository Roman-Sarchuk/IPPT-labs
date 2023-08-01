alphabet_ENG = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
                'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
alphabet_UA = ['а', 'б', 'в', 'г', 'ґ', 'д', 'е', 'є', 'ж', 'з', 'и', 'і', 'ї', 'й', 'к', 'л',
               'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ь', 'ю', 'я']
alphabet_ENG_caps = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                     'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
alphabet_UA_caps = ['А', 'Б', 'В', 'Г', 'Ґ', 'Д', 'Е', 'Є', 'Ж', 'З', 'И', 'І', 'Ї', 'Й', 'К', 'Л',
                    'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ь', 'Ю', 'Я']
number = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
alphabet = [alphabet_ENG, alphabet_UA, alphabet_ENG_caps, alphabet_UA_caps, number]

text = str(input('Ведіть текст... '))
key = -1


def coding(message):
    res = ''
    for sps in message:
        all_alp = 0     # | 0 - ENG / 1 - UA / 2 - ENG_caps / 3 - UA_caps / 4 - number |
        while all_alp < 5:
            if sps in alphabet[all_alp]:
                break
            all_alp += 1
        else:
            all_alp -= 1
        if sps in alphabet[all_alp]:
            position = alphabet[all_alp].index(sps)
            new_position = position + key
            res += alphabet[all_alp][new_position]
        else:
            res = res + sps
    print('Шифрування:', res)


coding(text)

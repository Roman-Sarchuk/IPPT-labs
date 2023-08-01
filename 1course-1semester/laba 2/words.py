def word(text):

    text = text.replace(',', '')            # Забираєм символи
    text = text.replace('.', '')
    text = text.replace('!', '')
    text = text.replace('?', '')
    text = text.replace(':', '')
    text = text.replace(';', '')
    text = text.replace('-', '')

    text = text.replace('1', '')
    text = text.replace('2', '')
    text = text.replace('3', '')
    text = text.replace('4', '')
    text = text.replace('5', '')
    text = text.replace('6', '')
    text = text.replace('7', '')
    text = text.replace('8', '')
    text = text.replace('9', '')
    text = text.replace('0', '')

    text = text.replace('«', '')
    text = text.replace('»', '')
    text = text.replace('<', '')
    text = text.replace('>', '')
    text = text.replace('"', '')
    text = text.replace("'", '')

    text = text.replace('(', '')
    text = text.replace(')', '')
    text = text.replace('[', '')
    text = text.replace(']', '')
    text = text.replace('{', '')
    text = text.replace('}', '')

    text = text.replace('+', '')
    text = text.replace('-', '')
    text = text.replace('*', '')
    text = text.replace('/', '')
    text = text.replace('=', '')

    text = text.lower()
    lin = text.split(' ')           # Розбивання речення на слова

    if '' in lin:   # Якшо речення має пропуски('')  у списку чи не має їх

        number = lin.count('')          # Рахуєм порожні значення('')
        for i in range(0, number):          # Забрираєм із списка порожні значення('')
            lin.remove('')
        print(lin)

        new_lin = []            # Забираєм повторки і вибирає тільки слова які мають > 3 букв
        if lin:
            for a in lin:
                a_len = len(a)
                if a_len > 3:
                    if a not in new_lin:
                        new_lin.append(a)
                    else:
                        pass
                else:
                    pass
        else:
            print('Помилка')

        lin_sort = sorted(new_lin)          # Сортуєм слова

        lin_sort_len = len(lin_sort)            # Виводим словник
        for w in range(0, lin_sort_len):
            print(lin_sort[w])
    else:
        new_lin = []            # Забираєм повторки і вибирає тільки слова які мають > 3 букв
        if lin:
            for a in lin:
                a_len = len(a)
                if a_len > 3:
                    if a not in new_lin:
                        new_lin.append(a)
                    else:
                        pass
                else:
                    pass
        else:
            print('Помилка')

        lin_sort = sorted(new_lin)          # Сортуєм слова

        lin_sort_len = len(lin_sort)            # Виводим словник
        for w in range(0, lin_sort_len):
            print(lin_sort[w])


sentence = str(input('> '))
word(sentence)
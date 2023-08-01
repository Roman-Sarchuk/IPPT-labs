alphabet_ENG = 'abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz'
alphabet_UA = 'абвгґдеєжзиіїйклмнопрстуфхцчшщьюяабвгґдеєжзиіїйклмнопрстуфхцчшщьюя'
alphabet_ENG_caps = 'ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ'
alphabet_UA_caps = 'АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ'
number = '01234567890123456789'

# text = str(input('Ведіть текст... '))
key = 1
code = ''
sps = ''


def processor(alp):
    global code
    global sps
    position = alp.find(sps)
    new_position = position + key
    code = code + alp[new_position]


def encryption():
    global code
    global sps
    for sps in text:
        if sps in alphabet_ENG:
            processor(alphabet_ENG)
        elif sps in alphabet_UA:
            processor(alphabet_UA)
        elif sps in alphabet_ENG_caps:
            processor(alphabet_ENG_caps)
        elif sps in alphabet_UA_caps:
            processor(alphabet_UA_caps)
        elif sps in number:
            processor(number)
        else:
            code = code + sps
    print('Шифрування:', code)
    code = ''
    sps = ''


while True:
    text = str(input('Ведіть текст... '))
    encryption()

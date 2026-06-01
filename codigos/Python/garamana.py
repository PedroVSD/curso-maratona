conta_letra = {}

palavra_1 = input()
palavra_2 = input()

i = 0

for i in range(len(palavra_1)):

    letra_1 = palavra_1[i]
    letra_2 = palavra_2[i]

    conta_letra[letra_1] = conta_letra.get(letra_1, 0) + 1

    if letra_2 != '*':
        conta_letra[letra_2] = conta_letra.get(letra_2, 0) - 1

resp = 'S'

for letra, qnt in conta_letra.items():
    if qnt < 0:
        resp = 'N'
        break

print(resp)

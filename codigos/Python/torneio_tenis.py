qnt_vitorias = 0

for i in range(6):
    resultado = input().upper()
    if resultado == 'V':
        qnt_vitorias += 1

if qnt_vitorias >= 5:
    print(1)
elif qnt_vitorias >= 3:
    print(2)
elif qnt_vitorias >= 1:
    print(3)
else:
    print(-1)

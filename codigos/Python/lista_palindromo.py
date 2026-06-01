n = int(input())
n_contracao = 0
p_esquerda = 0
p_direita = n - 1

lista = [int(x) for x in input().split()]

while p_esquerda < p_direita:
    if lista[p_esquerda] == lista[p_direita]:
        p_esquerda += 1
        p_direita -= 1
        continue

    if lista[p_esquerda] < lista[p_direita]:
        lista[p_esquerda + 1] += lista[p_esquerda]
        p_esquerda += 1
    else:
        lista[p_direita - 1] += lista[p_direita]
        p_direita -= 1

    n_contracao += 1

print(n_contracao)

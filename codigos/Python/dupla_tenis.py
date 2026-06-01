jogadores = [int(input()) for _ in range(4)]

jogadores.sort()

time_a = jogadores[0] + jogadores[3]
time_b = jogadores[1] + jogadores[2]

resultado = abs(time_a - time_b)

print(resultado)

def main():
    n = int(input())
    casas = [int(input()) for _ in range(n)]
    k = int(input())

    hash_casas = {}

    for i in range(len(casas)):
        diferenca = k - casas[i]

        if diferenca in hash_casas:
            print(diferenca, casas[i])
            return

        hash_casas[casas[i]] = i


if __name__ == "__main__":
    main()

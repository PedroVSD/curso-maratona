def main():
    qnt = int(input())
    fila = input().split()

    qntSai = int(input())
    saidas = set(input().split())

    resultado = []

    for pessoa in fila:
        if pessoa not in saidas:
            resultado.append(pessoa)

    print(" ".join(resultado))

if __name__ == "__main__":
    main()

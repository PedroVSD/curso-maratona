def main():
    n = int(input())
    pilha = []

    for _ in range (n):
        palavra = input()

        for letra in palavra:
            if letra == '{':
                pilha.append('{')
            elif letra == '}':
                if not pilha:
                    print("N")
                    return

                pilha.pop()

    if not pilha:
        print("S")
    else:
        print("N")


if __name__ == "__main__":
    main()

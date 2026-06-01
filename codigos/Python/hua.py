def main():
    texto = input()
    vogais = []

    for i in texto:
        if i in 'aeiou':
            vogais.append(i)

    invertida = vogais[::-1]

    if vogais == invertida:
        print("S")
    else:
        print("N")


if __name__ == "__main__":
    main()

def main():
    A, B = 0, 0

    n = int(input())
    entradas = input().split()

    for i in range(n):
        interruptor = int(entradas[i])
        if interruptor == 1:
            A = 1 - A
        elif interruptor == 2:
            A = 1 - A
            B = 1 - B

    print(A)
    print(B)

if __name__ == "__main__":
    main()

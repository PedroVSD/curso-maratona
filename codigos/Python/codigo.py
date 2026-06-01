def main():
    n = int(input())
    tot = 0

    s = [int(x) for x in input().split()]

    for i in range(n-2):
        if s[i] == 1 and s[i+1] == 0 and s[i+2] == 0:
            tot += 1

    print(tot)


if __name__ == "__main__":
    main()

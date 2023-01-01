def main():
    for _ in range(int(input())):
        n, m= map(int, input().split())
        l1 =  list(map(int, input().split()))
        l2 = list(map(int, input().split()))
        l1.sort()
        t = False
        for i in l2:
            t = False
            for j in range(n):
                if i > 11[j]:
                    11[j] = i;
                    t = True;
                    break
            if not t:
                l1[0] = i;
                l1.sort()
            else:
                t = False;
                l1.sort()
        print(sum(11))

if __name__ == '__main__':
    main()
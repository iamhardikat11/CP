n = int(input())
for i in range(n):
    k = int(input())
    s = input()
    print("Case #",end='')
    print(i+1, end='')
    print(':', end='')
    print(' ', end='')
    a = []
    a1= []
    a2 = []
    for i in range(len(s)+1):
        for j in range(i+1,len(s)+1):
            a.append(s[i:j])
    for i in a:
        a = s+i
        if a == a[::-1]:
            a1.append(i)
    for i in a1:
        if i == i[::-1]:
            a2.append(i)
    a2.sort(key = len)
    print(a2[0])
    # func(p)

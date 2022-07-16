n = int(input())
flag = 0
for i in range(1,38):
    for j in range(1,26):
        if 3**i+5**j== n:
            print(i, end = ' ')
            print(j)
            flag = 1
            break
if(flag==0): print(-1)
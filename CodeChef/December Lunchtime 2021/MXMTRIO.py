t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int, input().split()))
    l.sort()
    mx = (l[n-1]-l[0])*l[n-2]
    print(mx)
    

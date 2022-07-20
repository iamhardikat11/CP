import math
t = int(input())
while t>0:
    n = int(input())
    l = list(map(int, input().split()))
    li = {0,0,0}
    ans = 0
    if n&1:
        for i in range(1,n-1,2):
            if (max(l[i-1],l[i+1])-l[i]>=0): ans+=max(l[i-1],l[i+1])-l[i]+1

    else:
        ans = math.inf
        li1 = []
        li1.append(0)
        li2 = []
        li2.append(0)
        j=1
        for i in range(2,n-1,2):
            res = max(max(l[i-1],l[i+1])-l[i]+1,0)
            li2.append(li2[j-1]+res)
            j+=1
        j=1
        for i in range(1,n-1,2):
            res = max(max(l[i-1],l[i+1])-l[i]+1,0)
            li1.append(li1[j-1]+res)
            j+=1
        i=0
        
        while i<len(li1):
            ans = min(ans,li1[i]+li2[len(li2)-1]-li2[i])
            i+=1
    print(ans)
    t-=1


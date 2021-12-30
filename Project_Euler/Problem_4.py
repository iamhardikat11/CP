import math
def isPalin(n):
    m=n
    sum=0
    while(m!=0):
        r=m%10
        sum=sum*10+r
        m=m//10
    if(sum==n):
        return 1
    else:
        return 0
    
def check():
    for i in range(1000,900,-1):
        for j in range(i,900,-1):
            if(isPalin(i*j)):
                return i*j
    return -1

print(check())

import math
t = int(input())
for _ in range(t):
        n = int(input())
        print(math.floor(math.floor(pow(n,0.5))+(n**(1./3))-math.floor(pow(n,1/6.0))))
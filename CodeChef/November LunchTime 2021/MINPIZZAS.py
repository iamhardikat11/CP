# cook your dish here
import math
tc =  int(input())
for _ in range(tc):
     N, K = map(int,input().split())
     print((int)(N/math.gcd(N,K)))

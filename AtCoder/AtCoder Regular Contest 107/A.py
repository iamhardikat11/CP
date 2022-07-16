MOD = 998244353
A,B,C = map(int,input().split())
A = ((A*(A+1))//2)
B = ((B*(B+1))//2)
C = ((C*(C+1))//2)
print((A*B*C)%MOD)
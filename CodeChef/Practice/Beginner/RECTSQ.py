def gcd(l,b):
     if l==0:
          return b
     elif b ==0 :
          return l
     elif l>b:
          return gcd(b,l%b)
     return gcd(b%l,l)
          
          
          
          
tc =int(input())
for _ in range(tc):
     l,b = map(int,input().split())
     side = gcd(l,b)
     print((l//side)*(b//side))

# cook your dish here
def calculate(p, q):
     
    mod = 998244353
    expo = 0
    expo = mod - 2
 
    # Loop to find the value
    # until the expo is not zero
    while (expo):
 
        # Multiply p with q
        # if expo is odd
        if (expo & 1):
            p = (p * q) % mod
        q = (q * q) % mod
 
        # Reduce the value of
        # expo by 2
        expo >>= 1
 
    return p

     
tc = int(input())
for _ in range(tc):
  n = int(input())
  p = n * (n+1) *(n+1)
  print(calculate(p,4))

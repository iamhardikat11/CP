//Link:-https://www.codeabbey.com/index/task_view/combinations-counting


from math import factorial

n = int(input())
for i in range(0, n):
    n, k = (int(x) for x in input().split(' '))
    c = factorial(n)/(factorial(k)* factorial(n-k))
    print(int(c), sep = ' ', end = ' ')








#    import math
#     def C(n,k):
#      return math.factorial(n)/(math.factorial(k)*math.factorial(n-k))
#     def calculate():
#      t=int(input())
#      while t>0 :
#        n,k=input().split(" ")
#        n=int(n) k=int(k)
#        print(int(C(n,k)),end=" ")
#        t=t-1
#     calculate()

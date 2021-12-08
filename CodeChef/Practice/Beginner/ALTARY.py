# cook your dish here
def solve(i,l,N):
     c = 1
     while i<N-1:
          if(l[i]*l[i+1]<0):
               c+=1
          else :
               break
          i+=1
     return c
tc = int(input())
for _ in range(tc):
     N = int(input())
     l = list(map(int,input().split()))
     i=0
     while i<N-1:
          print(solve(i,l,N),end=' ')
          i+=1
     print(1)
          

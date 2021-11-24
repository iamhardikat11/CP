# cook your dish here
tc = int(input())
for _ in range(tc):
     n = int(input())
     v = list(map(int,input().split()))
     c = 0
     mn = v[0]
     for i in range(n):
          if v[i]<=mn :
           c+=1
          else :
           v[i] = mn
          if v[i]<mn :
           mn = v[i]
     print(c)      
          
          

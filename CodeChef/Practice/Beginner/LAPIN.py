# cook your dish here
tc = int(input())
for _ in range(tc):
     str = input()
     d1 = {}
     d2 = {}
     n = len(str)
     s = 0
     e = n-1
     while s < e:
         l = str[s]
         r = str[e]
         if l in d1:
              d1[l]+=1
         else:
              d1[l]=1
         if r in d2:
              d2[r]+=1
         else:
              d2[r]=1 
         s = s+1
         e = e-1
     if(d1==d2):
      print("YES")
     else:
      print("NO")    

t = int(input())
for i in range(t):
   s = input()
   list = []
   list = s.split(" ")
   sum=0
   for i in range(len(list)):
      sum+=int(list[i])**2
   print(sum, end=" ")


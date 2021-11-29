# cook your dish here
def solve(N):
     if(N[0]=="1"):
          N = "10"+N[1:]
     else:
          N = "1"+N
     return N
tc = int(input())
for _ in range(tc):
     N = input()
     print(solve(N))
     

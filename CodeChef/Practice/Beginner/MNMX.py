# cook your dish here
tc = int(input())
for _ in range(tc):
     N = int(input())
     arr = list(map(int,input().split()))
     ans = (N-1)*min(arr)
     print(ans)
     

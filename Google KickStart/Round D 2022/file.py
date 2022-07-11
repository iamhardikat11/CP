from itertools import product
def dfs(dp):
    m, n, ans = len(dp), len(dp[0]), 0
    for i, j in product(range(m-1, -1, -1), range(n-1,-1, -1)): 
        if i == m-1 or j == n-1:
            dp[i][j] = int(dp[i][j])
            ans = max(ans, dp[i][j])
        else:
            dp[i][j] = 1 + min(dp[i+1] [j], dp[i][j+1], dp[i+1][j+1]) if dp[i][j] == 1 else 0
            ans = max(ans, dp[i][j])
    return ans
    
n = int(input()) 
grid = [[0] * n for _ in range(n)] 
for r in range(n):
    a, b = map(int, input().split())
    b += 1 
    for c in range(a, b):
            grid[r][c] = 1 
ans = dfs(grid) 
print(ans)
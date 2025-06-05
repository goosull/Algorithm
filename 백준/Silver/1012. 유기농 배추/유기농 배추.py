import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7)

t = int(input())
for ___ in range(t):
    m,n, k = map(int, input().split())
    grid = [[False for _ in range(m)] for __ in range(n)]
    visit = [[False for _ in range(m)] for __ in range(n)]
    for _ in range(k):
        x, y = map(int, input().split())
        grid[y][x] = True

    ans = 0
    def dfs(y,x,cnt):
        global ans
        if visit[y][x]:
            return
        visit[y][x] = True
        if grid[y][x]:
            if cnt == 0:
                ans += 1
            if y > 0:
                dfs(y-1, x, 1)
            if y < n-1:
                dfs(y+1, x, 1)
            if x > 0:
                dfs(y, x-1, 1)
            if x < m-1:
                dfs(y, x+1, 1)
        
    for y in range(n):
        for x in range(m):
            dfs(y, x, 0)
                
    print(ans)
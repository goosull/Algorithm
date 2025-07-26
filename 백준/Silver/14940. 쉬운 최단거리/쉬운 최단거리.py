import sys
input = sys.stdin.readline

n, m = map(int, input().split())

grid = [list(map(int, input().split())) for _ in range(n)]
ans = [[-1] * m for _ in range(n)]
q = []
for i in range(n):
    for j in range(m):
        if grid[i][j] == 2:    
            q.append([i,j])
            ans[i][j] = 0
            
while(len(q)):
    nexts = [[0,1], [1,0], [0,-1], [-1,0]]
    pos = q.pop(0)
    py = pos[0]
    px = pos[1]
    for next in nexts:
        ny = next[1]
        nx = next[0]
        if 0<=nx + px <m and 0<=ny + py < n:
            if grid[ny+py][nx+px] != 0 and ans[ny+py][nx+px] == -1:
                q.append([ny+py, nx+px])
                ans[ny+py][nx+px] = ans[py][px] +1

for i in range(n):
    for j in range(m):
        if grid[i][j] == 0:  
            ans[i][j] = 0
            
for row in ans:
    print(" ".join(map(str,row)))
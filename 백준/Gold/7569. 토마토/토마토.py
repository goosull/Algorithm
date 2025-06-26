import sys
from collections import deque
input = sys.stdin.readline

q = deque()
m, n, h = map(int, input().split())
tomato = [[list(map(int, input().split())) for _ in range(n)] for __ in range(h)]

for z in range(h):
    for y in range(n):
        for x in range(m):
            if tomato[z][y][x] == 1:
                q.append([z, y, x])

while q:
    z, y, x = q.popleft()
    dir = [[0,0,1],[0,0,-1],[0,-1,0],[0,1,0],[1,0,0],[-1,0,0]]
    for d in dir:
        dz, dy, dx = z + d[0], y + d[1], x+ d[2]
        if 0 <= dz < h and 0 <= dy < n and 0 <= dx < m and tomato[dz][dy][dx] == 0:
            q.append([dz, dy, dx])
            tomato[dz][dy][dx] = tomato[z][y][x] + 1
 
ans = 0 
for z in range(h):
    for y in range(n):
        for x in range(m):
            if tomato[z][y][x] == 0:
                print(-1)
                sys.exit()
            if tomato[z][y][x] > 0:
                ans = max(ans, tomato[z][y][x])

       
print(ans -1)
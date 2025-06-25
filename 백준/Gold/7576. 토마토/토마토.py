import sys
from collections import deque
input = sys.stdin.readline

m, n = map(int, input().split())
tomato = [list(map(int, input().split())) for _ in range(n)]
dist = [[-1] * m for _ in range(n)]
q = deque()

for y in range(n):
    for x in range(m):
        if tomato[y][x] == 1:
            dist[y][x] = 0
            q.append((x, y))
            
directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

while q:
    x, y = q.popleft()
    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        if 0 <= nx < m and 0 <= ny < n:
            if tomato[ny][nx] == 0 and dist[ny][nx] == -1:
                tomato[ny][nx] = 1      
                dist[ny][nx] = dist[y][x] + 1
                q.append((nx, ny))
                
ans = 0
for y in range(n):
    for x in range(m):
        if tomato[y][x] == 0:
            print(-1)
            sys.exit(0)
        ans = max(ans, dist[y][x])

print(ans)
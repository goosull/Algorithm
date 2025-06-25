import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
grid = [list(input().strip()) for _ in range(n)]
# print(grid)
q = deque()

for y in range(n):
    for x in range(m):
        if grid[y][x] == 'F':
            q.append((x, y, 'F', 0))
for y in range(n):
    for x in range(m):
        if grid[y][x] == 'J':
            q.append((x, y, 'J', 0))           
            
directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

# print(q)

while q:
    x, y, a, t = q.popleft()
    # print(x, y, a, t)
    if (x == 0 or x == m-1 or y ==0 or y == n-1 )and a == 'J':
        print(t + 1)
        sys.exit()
    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        if 0 <= nx < m and 0 <= ny < n:
            if a == 'J' and grid[ny][nx] == '.':
                grid[ny][nx] = 'J'
                q.append((nx, ny, a, t+1))
            elif a == 'F' and (grid[ny][nx] == '.' or grid[ny][nx] == 'J'):
                grid[ny][nx] = 'F'
                q.append((nx, ny, a, t+1))
                
print("IMPOSSIBLE")
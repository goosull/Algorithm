from collections import deque

def solution(maps):
    n, m = len(maps), len(maps[0])
    visited = [[False] * m for _ in range(n)]
    dist    = [[0]     * m for _ in range(n)]

    dq = deque()
    dq.append((0, 0))
    visited[0][0] = True
    dist[0][0]    = 1 

    directions = [(1,0), (-1,0), (0,1), (0,-1)]

    while dq:
        y, x = dq.popleft()
        if (y, x) == (n-1, m-1):
            return dist[y][x]

        for dy, dx in directions:
            ny, nx = y + dy, x + dx
            if 0 <= ny < n and 0 <= nx < m \
               and not visited[ny][nx] \
               and maps[ny][nx] == 1:
                visited[ny][nx] = True
                dist[ny][nx]    = dist[y][x] + 1
                dq.append((ny, nx))

    return -1

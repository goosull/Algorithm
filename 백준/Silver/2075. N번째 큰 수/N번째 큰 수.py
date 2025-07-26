import sys
input = sys.stdin.readline

n = int(input())
grid = []
ans = 0
m = 0

for _ in range(n):
    lst = list(map(int, input().split()))
    grid += lst
    grid = sorted(grid, reverse=True)
    grid = grid[:n]
            
print(grid[-1])

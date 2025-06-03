import sys
import math
input = sys.stdin.readline

n, m = map(int, input().split())
lst = [] 
for _ in range(6):
    lst.append([0,0])
for _ in range(n):
    i, j = map(int, input().split())
    lst[j-1][i] += 1

ans = 0
for i in range(6):
    for j in range(2):
        ans += math.ceil(lst[i][j] / m )
        
print(ans)
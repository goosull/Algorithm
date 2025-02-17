import sys

n = input()
P = list(map(int, sys.stdin.readline().strip().split()))
P.sort(reverse=True)
ans = 0
for i in range(len(P)):
    ans += P[i] * (i + 1)
    
print(ans)
import sys
input = sys.stdin.readline

n = int(input().strip())

INF = 10**9
dp = [INF] * (n + 1)
dp[0] = 0

squares = []
j = 1
while j*j <= n:
    squares.append(j*j)
    j += 1

for i in range(1, n + 1):
    for sq in squares:
        if sq > i:
            break
        dp[i] = min(dp[i], dp[i - sq] + 1)

print(dp[n])
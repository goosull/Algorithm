import sys

dp = [0] * 1000001
x = int(input())
for a in range(2, 1000001):
    dp[a] = dp[a-1] + 1
    if (a % 3 == 0):
        dp[a] = min(dp[a], dp[a//3] +1)
    if (a % 2 == 0):
        dp[a] = min(dp[a], dp[a//2] +1)
        
print(dp[x])
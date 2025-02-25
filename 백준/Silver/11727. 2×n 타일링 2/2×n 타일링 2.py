import sys
input = sys.stdin.readline

n = int(input().strip())

dp = [0] * n
dp[0] = 1

if n >= 2:
    dp[1] = 3
    for i in range(2,n):
        dp[i] = dp[i-2] * 2 + dp[i-1] 
        dp[i] %= 10007

print(dp[n-1])
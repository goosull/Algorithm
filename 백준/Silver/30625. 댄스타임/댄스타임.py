import sys
sys.setrecursionlimit(10**7)
input = lambda: sys.stdin.readline().strip("\n")
ini = lambda: int(input())
ins = lambda: [*map(int, input().split())]
inf = float('inf')

MOD = 1_000_000_007
def count(pos, flag):
    if pos == N:
        return 1

    if dp[pos][flag] != -1:
        return dp[pos][flag]

    if flag == 1:
        dp[pos][flag] = (count(pos + 1, 1) * dance[pos]) % MOD
    else:
        dp[pos][flag] = (count(pos + 1, 1) * (M - dance[pos]) % MOD +
                         count(pos + 1, 0) * dance[pos] % MOD) % MOD
    return dp[pos][flag]

N, M = ins()
dance = [0] * N
dp = [[-1] * 2 for _ in range(N)]

for i in range(N):
    a, b = ins()
    dance[i] = 1 if b == 0 else M - 1
    
print(count(0, 0))
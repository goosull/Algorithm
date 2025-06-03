import sys
input = sys.stdin.readline

n, m = map(int, input().split())
lst = list(map(int, input().split()))
presum = [lst[i] for i in range(n)] + [0]

for i in range(n-2, -1, -1):
    presum[i] = lst[i] + presum[i+1]
    
for _ in range(m):
    start, end = map(int, input().split())
    print(presum[start-1] - presum[end])
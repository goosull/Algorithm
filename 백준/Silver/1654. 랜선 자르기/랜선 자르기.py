import sys
input = sys.stdin.readline

n, m = map(int, input().split())
lines = list(int(input()) for _ in range(n))

left = 1
right = max(lines)
ans = 0

while(left <= right):
    mid = (left + right) // 2
    cnt = 0
    for line in lines:
        cnt += line // mid
    if cnt >= m:
        ans = max(ans, mid)
        left = mid + 1
    else:
        right = mid - 1

print(ans)
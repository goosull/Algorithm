import sys
input = sys.stdin.readline

n, m = map(int, input().split())

lst = list(map(int, input().split()))
ans = 0
cnt = {}
left = 0

for right in range(n):
    x = lst[right]
    cnt[x] = cnt.get(x, 0) + 1
    
    while cnt[x] > m:
        y = lst[left]
        cnt[y] -= 1
        left += 1
        
    ans = max(ans, right-left +1)
    
print(ans)
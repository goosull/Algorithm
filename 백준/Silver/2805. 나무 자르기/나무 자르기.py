import sys
input = sys.stdin.readline

n, m = map(int, input().split())
trees = sorted(list(map(int, input().split())))
l, r = 0, trees[n-1]
ans = 0
while l <= r:
    mid = (l + r) // 2
    
    total = 0
    for tree in trees:
        if tree > mid:
            total += (tree - mid)
    
    if total >= m:
        ans = mid
        l = mid + 1
    else:
        r = mid -1
    
print(ans)

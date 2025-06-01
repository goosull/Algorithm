import sys
input = sys.stdin.readline

n, h = map(int, input().split())
objs = list(int(input()) for _ in range(n))
up, down = [] , []

for idx, size in enumerate(objs):
    if idx % 2 == 0:
        up.append(size)
    else:
        down.append(size)

count_up   = [0] * (h + 2)
count_down = [0] * (h + 2)
up_suffix   = [0] * (h + 2)
down_suffix = [0] * (h + 2)

for length in up:
    count_up[length] += 1

for length in down:
    count_down[length] += 1
    
for i in range(h, 0, -1):
    up_suffix[i]   = count_up[i]   + up_suffix[i + 1]
    down_suffix[i] = count_down[i] + down_suffix[i + 1]
    
ans = 1e9
cnt = 0
    
for i in range(1, h+1):
    broken = up_suffix[i] + down_suffix[h - i + 1]
    if ans > broken:
        ans = broken
        cnt = 1
    elif ans == broken:
        cnt += 1

print(ans, cnt)

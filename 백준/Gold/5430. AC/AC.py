import sys
from collections import deque
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    p = input().strip()
    n = int(input())
    nums = input().strip()[1:-1]
    if nums:
        array = deque(map(int, nums.split(',')))
    else:
        array = deque()
    if p.count('D') > n:
        print("error")
        continue
    rcnt = 0
    for op in p:
        if op == 'R':
            rcnt += 1
        elif op == 'D':
            if rcnt % 2 == 0:
                array.popleft()
            else:
                array.pop()
            
    if rcnt % 2 == 0:
        ans = '[' + ",".join(list(map(str, array))) + ']'
    else:
        ans = '[' + ",".join(list(map(str, array))[::-1]) + ']'
        
    print(ans)
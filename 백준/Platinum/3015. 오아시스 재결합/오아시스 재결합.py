import sys
input = sys.stdin.readline

n = int(input())
lst = [int(input()) for _ in range(n)]

stack = []
ans = 0

for h in lst:
    cnt = 1
    while stack and stack[-1][0] < h:
        ans += stack[-1][1]
        stack.pop()

    if stack and stack[-1][0] == h:
        same_count = stack[-1][1]
        ans += same_count
        stack.pop()
        cnt = same_count + 1
        if stack:
            ans += 1
        stack.append((h, cnt))
    else:
        if stack:
            ans += 1
        stack.append((h, 1))

print(ans)

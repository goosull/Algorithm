import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int, input().split()))
nums = list([lst[i], i] for i in range(n))
           
stack = []
ans = [-1 for _ in range(n)]

for i in nums:
    while stack and stack[-1][0] < i[0]:
        ans[stack[-1][1]] = i[0]
        stack.pop(-1)
    stack.append(i)
    
print(" ".join(map(str, ans)))
import sys
imput = sys.stdin.readline

n = int(input())
m = int(input())
lst = list(map(int, input().split()))

ans = -1

for i, x in enumerate(lst):
    if i == 0:
        ans = max(ans, x)

    if i == len(lst)-1:
        ans = max(ans, n-x)

    if i != len(lst)-1:
        ans = max(ans, (lst[i+1] - x + 1)//2) 
        
print(ans)
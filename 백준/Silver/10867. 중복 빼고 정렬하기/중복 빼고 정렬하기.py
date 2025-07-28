import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int, input().split()))
lst.sort()
dic = {}
for i in lst:
    dic[i] = 1
ans = []
for key in dic:
    ans.append(str(key))
print(" ".join(ans))
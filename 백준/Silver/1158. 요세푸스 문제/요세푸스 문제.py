import sys
input = sys.stdin.readline

n, k = map(int, input().split())
lst = [i+1 for i in range(n)]
ans = []
idx = k-1
while(len(lst) > 0):
    ans.append(str(lst.pop(idx)))
    idx += k -1
    if len(lst):
        idx %= len(lst)
    
print("<" + ", ".join(ans) + ">")
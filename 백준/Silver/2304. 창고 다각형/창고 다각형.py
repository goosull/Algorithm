import sys
input = sys.stdin.readline

n = int(input())
lst = [list(map(int, input().split())) for _ in range(n)]

lst = sorted(lst)

mx = [0, 0]
ans = 0

for i in lst:
    if mx[1] < i[1]:
        mx[1] = i[1]
        mx[0] = i[0]
        
        
tmax = 0

for idx, i in enumerate(lst):
    if i[0] < mx[0]:
        tmax = max(tmax, i[1])
        ans += tmax * (lst[idx+1][0] - i[0])
    
    if i[0] == mx[0]:
        ans += mx[1]
        
    if i[0] > mx[0]:
        break
    
lst.reverse()
smax = 0
for idx, i in enumerate(lst):
    if i[0] > mx[0]:
        smax = max(smax, i[1])
        ans += smax * (i[0] - lst[idx+1][0] )
  
print(ans)

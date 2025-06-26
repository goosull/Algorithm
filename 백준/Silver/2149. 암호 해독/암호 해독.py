import sys
input = sys.stdin.readline

k = input().strip()
origk = k  
k =sorted(k)
c = input().strip()

d = []
for i in k:
    d.append([i])

for i in range(len(k)):
    for j in range(len(c) // len(k)):
        d[i].append(c[i * (len(c) // len(k)) + j])

anslist = []
for i in origk:
    for j in d:
        if j[0] == i:
            anslist.append(j)
            d.remove(j)
            break

ans = ""
for i in range(len(c) // len(k)):
    for j in anslist:
        ans += j[i+1]
        
print(ans)
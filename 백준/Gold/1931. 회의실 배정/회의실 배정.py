import sys

N = int(input())
A = []

for i in range(N):  
    A.append(list(map(int, sys.stdin.readline().strip().split()))[::-1])

A.sort()

cur = 0
ans = 0
for i in range(N):
    if(A[i][1] >= cur):
        cur = A[i][0]
        ans +=1
              
print(ans)
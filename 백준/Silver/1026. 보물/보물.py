import sys

n = input()
A = list(map(int, sys.stdin.readline().strip().split()))
B = list(map(int, sys.stdin.readline().strip().split()))

A = sorted(A)
B = sorted(B, reverse=True)

ans = 0
for i in range(len(A)):
    ans += A[i] * B[i]
    
print(ans)

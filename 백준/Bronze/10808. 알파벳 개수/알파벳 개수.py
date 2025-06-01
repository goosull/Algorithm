import sys
input = sys.stdin.readline

s = input().strip()
ans = [0] * 26

for i in s:
    ans[ord(i) - 97] += 1
    
for i in range(26):
    print(ans[i], end = " ") 
import sys
input = sys.stdin.readline

s = input()
cur = 0
ans = 0

for i in range(0, len(s)-1):
    if s[i] == '(':
        if s[i+1] == ')':
            ans += cur 
        else:
            cur += 1
            ans += 1
    else:
        if not s[i-1] == '(':
            cur -= 1
            
print(ans)
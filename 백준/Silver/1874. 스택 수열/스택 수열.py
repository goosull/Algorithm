import sys
input = sys.stdin.readline

n = int(input())
l = []
ans = []
recent = 1
for _ in range(n):
    i = int(input())
    while(recent <= i):
        l.append(recent)
        ans.append('+')
        recent +=1
        
    if l[-1] == i:
        l.pop()
        ans.append('-')
    else:
        print('NO')
        exit()

print('\n'.join(ans))
            
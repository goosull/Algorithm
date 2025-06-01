import sys
input = sys.stdin.readline

n, m = map(int, input().split())
poke = {}
for i in range(1, n+1):
    name = input().strip()
    poke[i] = name
    poke[name] = i
    
for _ in range(m):
    q = input().strip()
    if q.isdigit():
        print(poke[int(q)])
    else:
        print(poke[q])
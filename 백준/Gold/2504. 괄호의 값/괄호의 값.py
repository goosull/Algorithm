import sys
from collections import deque
input = sys.stdin.readline

s = input().strip()
d = deque()

for c in s:
    if c in '([':
        d.append(c)
    else:
        if c == ')':
            opening, base = '(', 2
        else: 
            opening, base = '[', 3
            
        if not d:
            print(0)
            exit()
        if d[-1] == opening:
            d.pop()
            d.append(base)
        else:
            subtotal = 0
            while d and isinstance(d[-1], int):
                subtotal += d.pop()
            if not d or d[-1] != opening:
                print(0)
                sys.exit(0)
            d.pop()
            d.append(subtotal * base)

if any(not isinstance(x, int) for x in d):
    print(0)
else:
    print(sum(d))

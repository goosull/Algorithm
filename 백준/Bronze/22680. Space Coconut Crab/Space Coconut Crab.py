import sys
input = sys.stdin.readline
ini = lambda: int(input())
ins = lambda: [*map(int, input().split())]
inf = float('inf')

while e := ini():
    x= y =z =0
    ans = inf

    while z**3 <= e:
        while z**3 + y**2 <=e:
            x = e - z**3 - y**2
            if x >= 0:
                ans = min(ans, x+y+z)
            y+=1
        z+=1
        y = 0
    print(ans)
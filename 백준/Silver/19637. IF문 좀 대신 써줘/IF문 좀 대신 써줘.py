import sys
input = sys.stdin.readline

n, m = map(int, input().split())

ifflst = list(list(input().split()) for _ in range(n))

for _ in range(m):
    i = int(input())
    
    ans = ""
    l = 0
    r = n-1
    while(l <= r):
        mid = (l+r) //2
        
        if int(ifflst[mid][1]) >= i:
            ans = ifflst[mid][0]
            r= mid-1
        else:
            l = mid +1
     
    print(ans)
    
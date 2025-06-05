import sys
input = sys.stdin.readline

n = int(input())
paper = [list(map(int, input().split())) for _ in range(n)]
answ, ansb = 0, 0

def count(r,c,size):
    global answ, ansb
    color = paper[r][c]
    
    for i in range(r, r + size):
        for j in range(c, c + size):
            if paper[i][j] != color:
                half = size // 2
                count(r, c, half)
                count(r, c + half, half)
                count(r + half, c, half)
                count(r + half, c + half, half)
                return
        
    if color == 0:
        answ += 1
    else:
        ansb += 1
            
count(0, 0, n)
print(answ)
print(ansb)
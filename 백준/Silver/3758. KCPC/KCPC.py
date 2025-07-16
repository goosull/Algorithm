import sys
input = sys.stdin.readline

T=  int(input())

for _ in range(T):
    n, k, t, m = map(int, input().split())
    lst = list(list(map(int, input().split())) for _ in range(m))
    team = [[0  for _ in range(k)]+ [0,0] for __ in range(n)]
    for i, sub in enumerate(lst):
        team[sub[0]-1][sub[1]-1] = max(sub[2], team[sub[0]-1][sub[1]-1])
        team[sub[0]-1][k] = i
        team[sub[0]-1][k+1] += 1

    me = team[t-1]
    
    team.sort(key= lambda x:(sum(x[:k]), -x[k+1], -x[k]), reverse = True)
    
    for i in range (len(team)):
        if team[i] == me:
            print(i+1)
import sys
imput = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    dic = {}
    arr = list(map(int, input().split()))
    for i in range(201):
        if (arr.count(i) == 6):
            dic.setdefault(i, [])
    pt = 1
    for i in range(n):
        team = arr[i]
        if dic.get(team) or dic.get(team)==[]:
            dic[team] = dic[team] + [pt]
            pt += 1
    
    ansteam = 0
    anslst = [1e9]
    
    for team in dic:
        if sum(dic[team][:4]) < sum(anslst[:4]):
            ansteam= team
            anslst = dic[team]
            
        elif sum(dic[team][:4]) == sum(anslst[:4]):
            if dic[team][4] < anslst[4]:
                ansteam= team
                anslst = dic[team]
                    
    print(ansteam)
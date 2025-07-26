import sys
input = sys.stdin.readline

rooms = []
p, m = map(int, input().split())
for _ in range(p):
    l, n = input().split()
    l = int(l)
    isok = False

    if not len(rooms):
        rooms.append([l, [[l, n]]])
        isok = True
    else:
        for room in rooms:
            
            if abs(l-room[0]) <= 10 and len(room[1]) < m:
                room[1].append([l, n])
                isok = True
                break
    
    if not isok:
        rooms.append([l, [[l, n]]])
        
for room in rooms:
    if len(room[1]) >= m:
        print("Started!")
    else:
        print("Waiting!")
        
    room[1] = sorted(room[1], key=lambda x: x[1])
    
    for player in room[1]:
        print(player[0], player[1])
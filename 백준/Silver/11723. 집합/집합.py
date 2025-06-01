import sys
input = sys.stdin.readline

n = int(input())
S = [False] * 21

for _ in range(n):
    com = list(input().split())
    if len(com) > 1:
        com[1] = int(com[1])
    if com[0] == "add":
        S[com[1]] = True
    elif com[0] == "remove":
        S[com[1]] = False
    elif com[0] == "check":
        print(int(S[com[1]]))
    elif com[0] == "toggle":
        S[com[1]] = [True, False][S[com[1]]]
    elif com[0] == "all":
        S = [True] * 21
    elif com[0] == "empty":
        S = [False] * 21
        
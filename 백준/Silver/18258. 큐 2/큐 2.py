import sys
from collections import deque

input = sys.stdin.readline

n = int(input())
d = deque()
for _ in range(n):
    comm = input()
    try:
        comm = list(comm.split())
    except:
        comm = list(comm)
        
    if comm[0] == "push":
        d.append(int(comm[1]))
    if comm[0] == "pop":
        try:
            print(d.popleft())
        except:
            print(-1)
    if comm[0] == "size":
        print(len(d))
    if comm[0] == "empty":
        print(int(len(d) == 0))
    if comm[0] == "front":
        try:
            print(d[0])
        except:
            print(-1)
    if comm[0] == "back":
        try:
            print(d[len(d)-1])
        except:
            print(-1)

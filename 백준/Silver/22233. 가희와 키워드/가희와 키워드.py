import sys
input = sys.stdin.readline

dic = {}

n, m = map(int, input().split())
for _ in range(n):
    key = input().strip()
    if not dic.get(key):
        dic[key] = 1
    
for _ in range(m):
    keys = input().strip().split(",")
    for key in keys:
        if key in dic:
            dic.pop(key)
    
    print(len(dic))

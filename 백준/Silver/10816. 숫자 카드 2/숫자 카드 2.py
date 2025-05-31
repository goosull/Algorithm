import sys
input = sys.stdin.readline

n = int(input())
cards = list(map(int, input().split()))
m = int(input())
finds = list(map(int, input().split()))
    
cnt = {}
for card in cards:
    cnt[card] = cnt.get(card, 0) + 1

ans = []
for find in finds:
    ans.append(str(cnt.get(find, 0)))
    
print(" ".join(ans))
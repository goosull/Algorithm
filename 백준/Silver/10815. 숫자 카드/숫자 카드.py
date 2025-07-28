import sys
input = sys.stdin.readline

n = int(input())
cardlist = input().split()
m = int(input())
numbers = input().split()
cards = {}

for c in cardlist:
    cards[c] = 1

ans = []

for num in numbers:
    if cards.get(num, 0):
        ans.append('1')
    else:
        ans.append('0')
        
print(" ".join(ans))
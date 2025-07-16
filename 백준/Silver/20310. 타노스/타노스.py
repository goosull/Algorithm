import sys
input = sys.stdin.readline

s = input().strip()
cnt0, cnt1 = s.count('0'), s.count('1')
s = s.replace('1', '', cnt1//2)
s = s[::-1]
s = s.replace('0', '', cnt0//2)
print(s[::-1])
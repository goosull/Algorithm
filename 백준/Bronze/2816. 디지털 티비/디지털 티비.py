import sys
input = sys.stdin.readline

n = int(input())
lst = [input().strip() for _ in range(n)]

ptr1 = lst.index("KBS1")

ans = "1" * ptr1 + "4" * ptr1

ptr2 = lst.index("KBS2")

if (ptr2 > ptr1):
    ans += "1" * ptr2 + "4" * (ptr2 - 1)

else :
     ans += "1" * (ptr2+1) + "4" * (ptr2)



print(ans)
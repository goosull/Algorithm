n = int(input())
List = [0] * 1001
List[1] = 1
List[2] = 2

for i in range(3, 1001):
    List[i] += List[i-1] + List[i-2]
    List[i] %= 10007

print(List[n])
    
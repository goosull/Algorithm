l = [True] * 10001

for i in range(1, 10000):
    idx = i
    if (l[i]):
        print(i)
    temp = i
    while(idx > 0):
        temp += idx%10
        idx //= 10
    if (temp < 10001):
        l[temp] = False
            
def solution(n, w, num):
    L = (num - 1) // w
    offset = (num - 1) % w

    if L % 2 == 0:
        col = offset
    else:
        col = (w - 1) - offset

    count_above = 0
    j = L + 1

    while True:
        if j % 2 == 0:
            box = j * w + col + 1
        else:
            box = j * w + (w - col)

        if box > n:
            break

        count_above += 1
        print(box)
        j += 1

    return count_above + 1
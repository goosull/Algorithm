n = int(input())
for _ in range(n):
    left_stack = []
    right_stack = []
    pw = input()
    for i in pw:
        if i == '<':
            if len(left_stack):
                right_stack.append(left_stack.pop())
        elif i == '>':
            if len(right_stack):
                left_stack.append(right_stack.pop())
        elif i == '-':
            if len(left_stack):
                left_stack.pop()
        else:
            left_stack.append(i)
    print(''.join(left_stack + right_stack[::-1]))
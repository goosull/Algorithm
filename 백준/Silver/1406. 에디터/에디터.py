import sys

s = input().rstrip()
left_stack = list(s)
right_stack = []
n = int(input())
for _ in range(n):
    cmd = sys.stdin.readline().strip().split()
    if cmd[0] == "L":
        if left_stack:
            right_stack.append(left_stack.pop())
    elif cmd[0] == "D":
        if right_stack:
            left_stack.append(right_stack.pop())
    elif cmd[0] == "B":
        if left_stack:
            left_stack.pop()
    else:  
        left_stack.append(cmd[1])
        
print(''.join(left_stack + list(reversed(right_stack))))

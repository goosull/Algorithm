import sys

A_str, B_str, K_str, M_str = sys.stdin.readline().split()
A = int(A_str)
B = int(B_str)
K = int(K_str)
M = int(M_str)

count = 0

start_S = 10 ** (K - 1)
end_S = 10 ** K

max_len = len(B_str)

for S in range(start_S, end_S):
    str_S = str(S)
    infinite_S = str_S
    L = K
    while True:
        while L > len(infinite_S):
            infinite_S += str_S
        N_str = infinite_S[:L]
        N_int = int(N_str)
        if N_int > B:
            break
        if N_int >= A and N_int % M == 0:
            count += 1
        L += 1
        if L > max_len:
            break

print(count)
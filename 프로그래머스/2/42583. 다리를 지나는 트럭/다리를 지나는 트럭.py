from collections import deque

def solution(bridge_length, weight, truck_weights):
    time = 0
    on_bridge = deque()      
    total_w = 0

    while truck_weights or on_bridge:
        time += 1

        if on_bridge and on_bridge[0][1] == time:
            w, _ = on_bridge.popleft()
            total_w -= w

        if truck_weights and total_w + truck_weights[0] <= weight:
            w = truck_weights.pop(0)
            exit_time = time + bridge_length
            on_bridge.append((w, exit_time))
            total_w += w

    return time

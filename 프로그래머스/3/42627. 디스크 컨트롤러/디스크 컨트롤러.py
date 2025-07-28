import heapq

def solution(jobs):
    jobs_with_idx = [(arrival, duration, idx) for idx, (arrival, duration) in enumerate(jobs)]
    jobs_with_idx.sort(key=lambda x: x[0])

    n = len(jobs_with_idx)
    time = 0          
    i = 0               
    count = 0            
    total_turnaround = 0  
    heap = []         

    while count < n:
        while i < n and jobs_with_idx[i][0] <= time:
            arrival, duration, idx = jobs_with_idx[i]
            heapq.heappush(heap, (duration, arrival, idx))
            i += 1

        if not heap:
            time = jobs_with_idx[i][0]
            continue

        duration, arrival, idx = heapq.heappop(heap)
        time += duration
        total_turnaround += (time - arrival)
        count += 1

    return total_turnaround // n
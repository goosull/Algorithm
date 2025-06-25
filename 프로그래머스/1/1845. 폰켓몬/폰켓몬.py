def solution(nums):
    d = {}
    for n in nums:
        d[n] = d.get(n, 0) + 1
    
    return min(len(d), len(nums)//2)
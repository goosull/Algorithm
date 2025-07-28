
def solution(progresses, speeds):
    ans = []
    days = []
    for p, s in zip(progresses, speeds):
        day = 0
        while p < 100:
            p += s
            day += 1
        days.append(day)

        
    m = 0
    cnt = 0
    
    for day in days:
        if m == 0:
            m = day
        elif day > m:
            ans.append(cnt)
            m = day
            cnt = 0

        cnt += 1
    
    ans.append(cnt)
    return ans
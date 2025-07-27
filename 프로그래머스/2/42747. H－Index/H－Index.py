def solution(citations):
    answer = 0
    citations.sort()
    for i in citations:
        cnt = 0
        for j in citations:
            if i <= j:
                cnt += 1
        answer = max(min(i,cnt),answer)
    return answer
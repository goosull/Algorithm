def solution(s):
    lst = list(map(int, s.split()))
    print(lst)
    
    mx = lst[0]
    mn = lst[0]
    
    for i in lst:
        mx = max(mx, i)
        mn = min(mn, i)
        
    return (str(mn) + " "+ str(mx))
def solution(s):
    s = s.lower()
    ans = ""
    
    for idx, i in enumerate(s):
        if i.isalpha():
            if idx == 0 or s[idx-1] == " ":
                ans += i.upper()
            else:
                ans += i
        else:
            ans += i  
            
    return ans
        
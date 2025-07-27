import sys
input = sys.stdin.readline

n = int(input())
lst = list(input().strip() for _ in range(n))
dic = {}

for i in lst:
    words = i.split()
    answords = []
    flag = False
    for idx, word in enumerate(words):
        if not dic.get(word[0].upper(), 0) and not flag:
            dic[word[0].upper()] = 1
            word = '[' + word[0] + ']' + word[1:]
            flag =  True
        
        answords.append(word)
    if not flag:
        answords = []
        for word in words:
            for idx, letter in enumerate(word):
                if not dic.get(letter.upper(), 0) and not flag:
                    dic[letter.upper()] = 1
                    word = word[:idx] + '[' + letter + ']' + word[idx+1:]
                    flag =  True
                    break
            
            answords.append(word)
                    
    print(" ".join(answords))
        
    
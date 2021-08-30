import re
def solution(s):
    size = len(s)
    if size < 2: return size
    p,q,r, answer = 0, 1, 2, [1]
    while p < size:
        pos = p
        if q < size and s[p] == s[q]:
            answer.append(0)
            while s[p] == s[q]:
                p -= 1; q += 1
                answer[-1] += 2
                if p < 0 or q >= size:
                    break
        p,q,r = pos, pos + 1, pos + 2
        
        if r < size and s[p] == s[r]:
            answer.append(1)
            while s[p] == s[r]:
                p -= 1; r += 1
                answer[-1] += 2
                if p < 0 or r >= size:
                    break
        p,q,r = pos + 1, pos + 2, pos + 3
    return max(answer)
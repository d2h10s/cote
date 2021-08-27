from collections import deque

def solution(s):
    answer = 0
    left = ['(', '{', '[']
    right = [')', '}', ']']
    for _ in range(len(s)):
        deq = deque()
        isRight = True
        for c in s:
            if c in left:
                deq.append(c)
            elif c in right:
                if not deq:
                    isRight = False
                    break
                elif deq[-1] == left[right.index(c)]:
                    deq.pop()
                else:
                    isRight = False
                    break
        if not deq and isRight:
            answer += 1
        s = s[1:]+s[0]
    return answer
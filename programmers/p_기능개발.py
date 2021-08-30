import math
def solution(progresses, speeds):
    answer = []
    day = 0
    for p,s in zip(progresses,speeds):
        end = max(math.ceil((100-p)/s),1)
        if day >= end:
            answer[-1]+=1
        else:
            answer.append(1)
            day = max(end,day)
        #print(end, day, answer)
    return answer
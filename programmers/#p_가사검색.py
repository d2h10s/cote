import re
def solution(words, queries):
    answer = []
    for q in queries:
        answer.append(sum([1 if re.match('^'+q.replace('?','.')+'$', s) else 0 for s in words]))
    return answer
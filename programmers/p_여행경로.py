def solution(tickets):
    d = {t[0]:[] for t in tickets}
    for t in tickets:
        d.get(t[0],-1).append(t[1])
    for b in d:
        d[b].sort()
    
    cur = "ICN"
    answer = [cur]
    
    for _ in range(len(tickets)):
        print(d)
        cur = d[cur].pop(0)
        answer.append(cur)
    return answer

assert solution([["ICN", "AAA"], ["ICN", "BBB"], ["BBB", "ICN"]]) == ["ICN", "BBB", "ICN", "AAA"]
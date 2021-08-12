def combinations(numbers, r): # combination without repetition
    def dfs(idx):
        if idx >= len(numbers):
            return
        if len(temp) == r:
            result.append(tuple(temp.copy()))
        for i in range(idx, len(numbers)):
            if not visited[numbers[i]]:
                visited[numbers[i]] = True
                temp.append(numbers[i])
                dfs(i)
                visited[temp.pop()] = False
            
    visited = dict(zip(numbers, [False for _ in numbers]))
    result = []
    temp = []
    dfs(0)
    return result
    
n = int(input())
M = [list(map(int, input().split())) for _ in range(n)]
starts = list(combinations(range(1,n+1),n//2))
links = list(tuple(x for x in range(1, n+1) if x not in start) for start in starts)
result = 1e9
for start, link in zip(starts, links):
    score_l = 0
    score_s = 0
    ss = list(combinations(start, 2))
    ll = list(combinations(link, 2))
    for s in ss:
        score_s += M[s[0]-1][s[1]-1]+M[s[1]-1][s[0]-1]
    for l in ll:
        score_l += M[l[0]-1][l[1]-1]+M[l[1]-1][l[0]-1]
    result = min(result, abs(score_l-score_s))
print(result)
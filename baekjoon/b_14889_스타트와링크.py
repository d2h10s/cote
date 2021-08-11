def combinations(numbers, r): # combination without repetition
    visited = dict(zip(numbers, [False for _ in numbers]))
    result = []
    for i in numbers:
        temp = [i]
        visited[i] = True
        for j in numbers:
            if not visited[j]:
               visited[j] = True
               temp.append(j)
               if len(temp) == r:
                   result.append(temp.copy())
                   visited[temp.pop()] = False
    return result
    
n = int(input())
M = [list(map(int, input().split())) for _ in range(n)]
starts = list(combinations(range(1,n+1),n//2))
links = list(tuple(x for x in range(1, n+1) if x not in start) for start in starts)
result = 1e9
for start, link in zip(starts, links):
    score_l = 0
    score_s = 0
    for i in range(len(start)):
        for j in range(len(start)):
            if start[i]!=start[j]:
                score_s += M[start[i]-1][start[j]-1]
            if link[i] != link[j]:
                score_l += M[link[i]-1][link[j]-1]
    result = min(result, abs(score_l-score_s))
print(result)
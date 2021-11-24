weight = 0
edge = 1

def dfs(graph, maps, now, count, k, road):
    if k in road:
        count += 1
    for next in graph[now][edge]:
        if maps[now][edge][next]:
            maps[now][edge][next] = False
            maps[next][edge][now] = False
            road.append(graph[next][weight])
            count = max(dfs(graph, maps.copy(), next, count, k, road.copy()),count)
            road.pop()
    return count

def make_graph(n, k, edges):
    g = {x:[k[x-1], {}] for x in range(1,n+1)}
    for e in edges:
        g[e[0]][edge][e[1]] = True
        g[e[1]][edge][e[0]] = True
    return g
        
def solution(n, k, edges):
    g = make_graph(n, k, edges)
    answer = []
    for i in range(1, n+1):
        cnt = 0
        for j in range(1, n+1):
            maps = make_graph(n, k, edges)
            cnt += dfs(g, maps, j, 0, i, [g[j][weight]])
        answer.append(cnt//2+1 if cnt else 0)
    return answer

assert solution(3, [1,2,1], [[1,2],[2,3]]) == [5, 4, 0]
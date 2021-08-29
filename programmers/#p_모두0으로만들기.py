def solution(vortexes, edges):
    g = {}
    for i,vortex in enumerate(vortexes):
        g[i] = {"weight":vortex,"neighbor":[]}
    for edge in edges:
        g[edge[0]]["neighbor"].append(edge[1])
        g[edge[1]]["neighbor"].append(edge[0])
    answer = 0
    next = []
    for v in g:
        if len(g[v]['neighbor']) == 1:
            weight = g[v]['weight']
            g[g[v]['neighbor'][0]]['weight'] += weight
            g[v]['weight'] = 0
            next.append(g[v]['neighbor'][0])
            answer += weight
    next = list(set(next))
    while next:
        v = next.pop()
        for i,vv in enumerate(g[v]['neighbor']):
            if g[v]['weight'] and g[vv]['weight']:
                weight = g[v]['weight']
                g[vv]['weight'] += weight
                g[v]['weight'] = 0
                next.append(g[v]['neighbor'][i])
                answer += weight
    answer = -1 if not answer else answer
    return answer

assert solution([-5,0,2,1,2],[[0,1],[3,4],[2,3],[0,3]])==9
assert solution([0,1,0],[[0,1],[1,2]])==-1
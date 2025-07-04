from collections import deque
class v_node:
    def __init__(self):
        self.visited = 0
        self.changed = 0

class s_node:
    def __init__(self, station, line):
        self.station = station
        self.line = line

N,L = map(int, input().split())
st = [[] for _ in range(N+1)]
lines = []
visited = [v_node() for x in range(N+1)]

for i in range(L):
    line = list(map(int, input().split()))[:-1]
    lines.append(line)
    for j in range(len(line)):
        if len(line)>j+1:
            st[line[j]].append(s_node(line[j+1], len(line)))
        if 0 < j:
            st[line[j]].append(s_node(line[j-1], len(line)))
S, E = map(int, input().split())

que = deque()
que.append(S)
cur_line = que[0].line

while que:
    cur = que.popleft()

    for next in st[cur]:
        if visited[next.station].visited == 0:
            visited[next.station].visited = 1
            if st[cur]
            que.append(station)
            
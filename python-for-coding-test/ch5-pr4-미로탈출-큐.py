from collections import deque
n, m = map(int, input().split())
maps = [[int(x) for x in input()] for _ in range(n)]
direct = [(1,0), (-1,0), (0,1), (0,-1)]
que = deque([(0,0)])

while que:
    r,c = que.popleft()
    for d in direct:
        nr, nc = r+d[0], c+d[1]
        if nr < 0 or nc < 0 or nr >= n or nc >= m:
            continue
        if maps[nr][nc] != 1 or (nr,nc) == (0,0):
            continue
        que.append((nr,nc))
        maps[nr][nc] = maps[r][c] + 1
    
print(maps[n-1][m-1])
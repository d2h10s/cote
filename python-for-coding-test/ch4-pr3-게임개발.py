n, m = map(int, input().split())
r,c,d = map(int, input().split())
direction = {0:(-1,0), 1:(0,1), 2:(1,0), 3:(0,-1)}
maps = [list(map(int, input().split())) for _ in range(n)]
visited = [[False for x in range(m)] for x in range(m) ]
visited[r][c] = True
cnt = 1
while True:
    ismoved = False
    for i in range(4):
        d = (d-1)%4
        nd = direction[d]
        nr = r+nd[0]
        nc = c+nd[1]
        if nr < 0 or nr >= n or nc < 0 or nc >= m:
            continue
        elif visited[nr][nc] or maps[nr][nc]:
            continue
        r,c=nr,nc
        visited[r][c] = True
        ismoved = True
        break
    if not ismoved:
        nd = direction[(d+2)%4]
        nr = r+nd[0]
        nc = c+nd[1]
        if nr < 0 or nr >= n or nc < 0 or nc >= m:
            break
        elif visited[nr][nc] or maps[nr][nc]:
            break
        r,c = nr,nc
    cnt += 1

print(cnt)
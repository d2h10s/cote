'''
15 14
00000111100000
11111101111110
11011101101110
11011101100000
11011111111111
11011111111100
11000000011111
01111111111111
00000000011111
01111111111000
00011111111000
00000001111000
11111111110011
11100011111111
11100011111111
'''
n, m = map(int, input().split())
maps = [[int(x) for x in input()] for _ in range(n)]
direct = [(1,0), (0,1), (0,-1), (-1,0)]
def dfs(r,c):
    maps[r][c] = 1
    for rr,cc in direct:
        nr = r+rr
        nc = c+cc
        if nr < 0 or nr >= n or nc < 0 or nc >= m:
            continue
        if maps[nr][nc]:
            continue
        dfs(nr, nc)

cnt = 0
for i in range(n):
    for j in range(m):
        if not maps[i][j]:
            dfs(i, j)
            cnt += 1
print(cnt)

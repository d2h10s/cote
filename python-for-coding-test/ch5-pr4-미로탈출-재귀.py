n, m = map(int, input().split())
maps = [[int(x) for x in input()] for _ in range(n)]

def bfs(px, py, x,y):
    if x < 0 or y < 0 or x >= n or y >= m:
        return False
    if maps[x][y] != 1:
        return False
    maps[x][y] = maps[px][py] + 1
    bfs(x,y,x+1, y)
    bfs(x,y,x, y+1)
    bfs(x,y,x-1, y)
    bfs(x,y,x, y-1)

bfs(0,0,0,0)
print(maps[n-1][m-1]-1)
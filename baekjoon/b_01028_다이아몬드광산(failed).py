r,c = map(int, input().split())
mine = [input() for _ in range(r)]
print(mine)

def n_size(n):
    if n: return 1
    else: return 4*(n-1)

def bfs(r2, c2, l):
    if r2<0 or r2>=r or c2<0 or c2>=c:
        return False
    
    if not bfs(r2+1, c2, l+1):
        return
    if not bfs(r2, c2+1, l+1):
        return
    if not bfs(r2-1, c2, l+1):
        return
    if not bfs(r2, c2-1, l+1):
        return
    
for i in range(1,r):
    
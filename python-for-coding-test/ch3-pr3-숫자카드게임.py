n, m = list(map(int, input().split()))
mat = [list(map(int,input().split())) for _ in  range(n)]
mat = [[mat[i][j] for i in range(n)] for j in range(m)]
print(max(min(mat)))
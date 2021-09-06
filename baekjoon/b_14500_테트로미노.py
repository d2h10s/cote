n,m = map(int, input().split())
d = [[int(x) for x in input().split()] for _ in range(n)]
M = 0

for i in range(n):
    for j in range(m):
        if j < m-3: # ㅡ
            temp = sum([d[i][j], d[i][j+1], d[i][j+2], d[i][j+3]])
            M = max(temp, M)
        if i < n-3: # ㅣ
            temp = sum([d[i][j], d[i+1][j], d[i+2][j], d[i+3][j]])
            M = max(temp, M)
        if i < n-1 and j < m-1: # ㅁ
            temp = sum([d[i][j],d[i][j+1],d[i+1][j],d[i+1][j+1]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # L
            temp = sum([d[i][j],d[i+1][j],d[i+2][j],d[i+2][j+1]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # J
            temp = sum([d[i][j+1],d[i+1][j+1],d[i+2][j+1],d[i+2][j]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # ┌─
            temp = sum([d[i][j], d[i][j+1], d[i][j+2], d[i+1][j]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # ─┐
            temp = sum([d[i][j], d[i][j+1], d[i][j+2], d[i+1][j+2]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # ┌
            temp = sum([d[i][j], d[i][j+1], d[i+1][j], d[i+2][j]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # ┐
            temp = sum([d[i][j], d[i][j+1], d[i+1][j+1], d[i+2][j+1]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # ─┘
            temp = sum([d[i+1][j], d[i+1][j+1], d[i+1][j+2], d[i][j+2]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # └─
            temp = sum([d[i+1][j], d[i+1][j+1], d[i+1][j+2], d[i][j]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # N
            temp = sum([d[i][j], d[i+1][j], d[i+1][j+1], d[i+2][j+1]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # 반대N
            temp = sum([d[i][j+1], d[i+1][j], d[i+1][j+1], d[i+2][j]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # Z
            temp = sum([d[i+1][j], d[i+1][j+1], d[i][j+1], d[i][j+2]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # 반대 Z
            temp = sum([d[i][j], d[i+1][j+1], d[i][j+1], d[i+1][j+2]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # ㅏ
            temp = sum([d[i][j], d[i+1][j], d[i+2][j], d[i+1][j+1]])
            M = max(temp, M)
        if i < n-2 and j < m-1: # ㅓ
            temp = sum([d[i][j+1], d[i+1][j+1], d[i+2][j+1], d[i+1][j]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # ㅗ
            temp = sum([d[i+1][j], d[i+1][j+1], d[i+1][j+2], d[i][j+1]])
            M = max(temp, M)
        if i < n-1 and j < m-2: # ㅜ
            temp = sum([d[i][j], d[i][j+1], d[i][j+2], d[i+1][j+1]])
            M = max(temp, M)
print(M)
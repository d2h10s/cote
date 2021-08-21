n = int(input())
p = [['*' for _ in range(n)] for _ in range(n)]

def recur(x, i, j, n):
    for ii in range(i+n//3,i+n//3*2):
        for jj in range(j+n//3,j+n//3*2):
            x[ii][jj] = ' '
    if n > 2:
        for ii in range(i, i+n-1, n//3):
            for jj in range(j, j+n-1, n//3):
                recur(x, ii, jj, n//3)

recur(p, 0, 0, n)
p = '\n'.join([''.join([j for j in i]) for i in p])
print(p)

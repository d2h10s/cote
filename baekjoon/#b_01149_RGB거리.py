n = int(input())
cost = [[int(x) for x in input().split()] for _ in range(n)]
answer=  0
d = [0]*n
d[0] = min(cost[0])
s = ''
for i in range(n):
    temp = [cost[i][j]+max(*cost[1][0:j],*cost[1][j+1:]) for j in range(3) if str(j) != s[-1]]
    s+=

    d[i] = 
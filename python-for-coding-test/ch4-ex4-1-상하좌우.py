n = int(input())
d = {'R':[0,1], 'L':[0,-1], 'U':[-1,0], 'D':[1,0]}
steps = [d[i] for i in input().split()]
now = [1,1]
for step in steps:
    nx = now[0]+step[0]
    ny = now[1]+step[1]
    if nx < 1 or nx > n or ny < 1 or ny > n:
        continue
    now[0]=nx
    now[1]=ny
print(now[0],now[1])

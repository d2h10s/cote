from collections import deque
bam = deque([[0,0]])

n = int(input())
apples = [[int(x) for x in input().split()] for _ in range(int(input()))]
direc = [[x for x in input().split()] for _ in range(int(input()))]
pre_time = 0
d = (0,1)
for x,c in direc:
    time = int(x)
    delay = time - pre_time
    for i in delay:
        x,y = bam[-1]
        if bam[-1]
    pre_time = time

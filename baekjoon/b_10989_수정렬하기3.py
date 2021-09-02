# Counting Sort
from sys import stdin
n = int(stdin.readline())
x = [0]*10001
for i in range(n):
    x[int(stdin.readline())]+=1
for i in range(1,10001):
    if x[i]:
        for _ in range(x[i]):
            print(i)
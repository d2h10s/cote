'''
4 6
19 15 10 17
'''
import sys
n,m = map(int, sys.stdin.readline().rstrip().split())
string = list(map(int,  sys.stdin.readline().rstrip().split()))
string.sort(reverse=True)
for i in range(string[0]-1,-1,-1):
    result = 0
    for j in string:
        if j-i > 0:
            result += j-i
        else:
            break
    if result >= m:
        print(i)
        break
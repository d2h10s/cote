'''
이 문제는 파라메트릭 서치 문제이다.
parametric search
4 6
19 15 10 17
'''
import sys
n,m = map(int, sys.stdin.readline().rstrip().split())
string = list(map(int,  sys.stdin.readline().rstrip().split()))
stx, etx = 0, max(string)
result = 0
while stx <= etx:
    total = 0
    mid = (etx+stx)//2
    total = sum([i-mid for i in string if i-mid>0])
    if m < total:
        result = mid
        stx = mid+1
    else:
        etx = mid-1
print(result)
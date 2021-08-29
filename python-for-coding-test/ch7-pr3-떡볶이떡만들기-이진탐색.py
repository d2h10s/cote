import sys
n,m = map(int, sys.stdin.readline().rstrip().split())
string = list(map(int,  sys.stdin.readline().rstrip().split()))
string.sort(reverse=True)
stx, etx = 0, string[0]
result = 0
while stx <= etx:
    total = 0
    mid = (etx+stx)//2
    for i in string:
        if i-mid>0:
            total += i-mid 
        else:
            break
    if total < m:
        etx = mid-1
    else:
        result = mid
        stx = mid+1
print(result)
#n = int(input())
#k = list(map(int, input().split()))


def solution(n, k):
    d = [0]*n
    d[0] = k[0]
    d[1] = max(k[0], k[1])
    for i in range(2,n):
        d[i] = max(d[i-1], d[i-2]+k[i])
    print(d)
    return d[n-1]

a = solution(4, [1,3,1,5])
print(a)
assert a ==8
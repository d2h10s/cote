n, m, k = map(int, input().split())
numbers = list(map(int, input().split()))
numbers.sort(reverse=True)
cnt = 0
s = 0
while m > 0:
    m -= 1
    if cnt < k:
        s += numbers[0]
        cnt += 1
    else:
        s += numbers[1]
        cnt = 0
print(s)
    
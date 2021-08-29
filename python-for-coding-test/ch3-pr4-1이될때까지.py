import time
n, k = map(int, input().split())
st = time.time()
cnt = 0
while n >= k:
    cnt += 1
    n //= k
if n > 1:
    cnt += n%k
print(cnt)
print(f'elapsed time is {(time.time()-st)*1000}ms')

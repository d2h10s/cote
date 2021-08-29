from time import time

n = int(input())
st = time()
secs = n*60*60+59*60+59
cnt = 0
for sec in range(0, secs+1):
    hh = sec//(60*60)
    sec = sec%(60*60)
    mm = sec//60
    sec = sec%60
    if '3' in f'{hh}{mm}{sec}':
        cnt += 1
print(cnt)
print(f'elapsed time is {(time()-st)*1000:.4f}ms')

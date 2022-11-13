n,k=map(int,input().split())
a=list(map(int, input().split()))
adv = 0
idx = 0
k -= 1
while True:
    if idx <= k and a[idx]:
        adv += 1
        idx += 1
    elif k < idx < n and a[idx] and a[idx-1]==a[idx]:
        adv += 1
        idx += 1
    else:
        break
print(adv)
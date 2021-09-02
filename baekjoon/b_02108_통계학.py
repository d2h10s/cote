from sys import stdin
n = int(stdin.readline())
x = [0]*8002
most, most_num = 0,0
m, M = 4000, -4000
s = 0
for i in range(n):
    number = int(stdin.readline())
    s += number
    x[number+4000]+=1
    if most < x[number+4000]:
        most = x[number+4000]
        most_num = number
    m,M = min(m, number), max(M, number)
num = []
for i in range(8002):
    if x[i]:
        num += [i-4000]*x[i]
print(f'{s/n:.0f}\n{num[n//2]}')
if x.count(most)>1:
    cnt = 0
    for i in range(8002):
        if x[i] == most:
            if cnt == 1:
                print(i-4000)
                break
            cnt += 1
else:
    print(most_num)
print(M-m)

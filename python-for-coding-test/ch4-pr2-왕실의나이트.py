s = input()
c = ord(s[0])-ord('a')
r = int(s[1])
d = [[-2,-1],[-2,1],[-1,2],[-1,-2],[1,2],[1,-2],[2,1],[2,-1]]
cnt = 0
for step in d:
    nr = r+step[0]
    nc = c+step[1]
    if nr < 1 or nr > 8 or nc < 1 or nc > 8:
        continue
    cnt+=1
print(cnt)
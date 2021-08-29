import re
n = int(input())
for i in range(n):
    s=input()
    a = re.findall(r'(100+1+|01)+$',s)
    a = ''.join(''.join(x) for x in a)==s
    print('YES' if a else 'NO')
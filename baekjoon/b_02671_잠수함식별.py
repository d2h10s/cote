import re
s=input()
a = re.findall(r'(100+1+)(?=100+1+)|(100+1+)|(01)',s)
#print(a)
a = ''.join(''.join(x) for x in a)==s
print('SUBMARINE' if a else 'NOISE')
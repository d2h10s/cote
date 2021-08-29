import re
s = input()
a = (''.join(re.compile('pi|ka|chu').findall(s))) == s
print('YES' if a else 'NO')

import re
s = input()
p = re.compile(r'[A-Z]+')
q = re.compile(r'__')
if ('_' in s and p.search(s)) or q.search(s) or \
    s[0].isupper() or s[0] == '_' or s[-1] == '_':
    s = 'Error!'
elif '_' not in s and not p.search(s):
    pass
elif '_' in s:
    s = s.split('_')[0]+''.join([w.capitalize() for w in s.split('_')[1:]])
else:
    s = '_'.join([x.lower() for x in re.split('([A-Z][a-z]*)', s) if x])

print(s)
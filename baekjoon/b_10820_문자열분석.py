import sys, re
s = sys.stdin.readlines()
for c in s:
    print(len(re.findall('[a-z]',c)),\
    len(re.findall('[A-Z]',c)),\
    len(re.findall('[0-9]',c)),\
    len(re.findall(r' ',c)))
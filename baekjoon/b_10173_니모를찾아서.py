import re
while (s:=input())!='EOI':
    print('Found' if re.search('[nN][eE][mM][oO]',s) else 'Missing')
        
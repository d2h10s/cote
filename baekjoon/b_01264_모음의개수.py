import re
while (s:=input()) != '#':
    print(len(re.findall('[aeiouAEIOU]',s)))
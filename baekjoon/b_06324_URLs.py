import re
n = int(input())
for i in range(n):
    s = input()
    print(f'URL #{i+1}')
    print(f'{"Protocol":9}= {re.findall(r"^[a-z]*(?=:)",s)[-1]}')
    host = re.findall(r"(?<=//).*?(?=:|/|$)",s)
    print(f'{"Host":9}= {host[0]}')
    port = [x for x in re.findall(r"(?<=:)[0-9]*?(?=/|$)",s) if x]
    print(f'{"Port":9}= {port[0] if port else "<default>"}')
    path = [x for x in re.findall(r"(?<=\b/).*",s) if x]
    print(f'{"Path":9}= {path[0] if path else "<default>"}\n')
'''
5
ftp://acm.baylor.edu:1234/pub/staff/mr-p
http://www.informatik.uni-ulm.de/acm
gopher://veryold.edu
gopher://veryold.edu:4444
gopher://914781568731234.edd-123.edu:4444/asdf
'''
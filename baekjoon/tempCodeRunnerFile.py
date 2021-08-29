import re
for i in range(int(input())):
    s = input()
    print(f'{"Protocol":9}= {re.search(r"^[a-z]*(?=:)",s).group(0)}')
    host = re.search(r"(?<=//).*?(?=:|/|$)",s).group(0)
    print(f'{"Host":9}= {host}')
    port = re.findall(r"(?<=:)[0-9]*?(?=/|$)",s)[-1]
    print(f'{"Port":9}= {port if port else "<defualt>"}')
    path = re.findall(r"(?<=\b/).*",s)
    print(f'{"Path":9}= {path[0] if path else "<default>"}',end='\n\n')
'''
4
ftp://acm.baylor.edu:1234/pub/staff/mr-p
http://www.informatik.uni-ulm.de/acm
gopher://veryold.edu
gopher://veryold.edu:4444
'''
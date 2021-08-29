import re

a,b = input(), input()
answer = len(re.compile(b).findall(a))
print(answer)
import re
answer = []
for i in range(int(input())):
    answer+= [str(int(x)) for x in re.findall('([0-9]*)',input()) if x]
print('\n'.join(sorted(answer, key=lambda x:int(x))))
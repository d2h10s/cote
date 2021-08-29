import re
while s:= input():
    if s == 'end': break
    if not re.search('[aeiou]',s)\
        or re.search('[^aeiou]{3}|[aeiou]{3}',s)\
        or re.search(r'(?=(.))(?![eo])\1{2,}',s):
        print(f'<{s}> is not acceptable.')
    else:
        print(f'<{s}> is acceptable.')
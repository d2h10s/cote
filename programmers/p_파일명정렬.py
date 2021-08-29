import re
def solution(files):
    s = sorted([re.split(r'([0-9]+)', file) for file in files],key=lambda x: (x[0].lower(),int(x[1])))
    return [''.join(x) for x in s]
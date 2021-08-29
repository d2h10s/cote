s = list('abcde')
s.sort(key=lambda a: 1 if a <'c' else 0)
print(s)
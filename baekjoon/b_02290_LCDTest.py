s, n = input().split()
s = int(s)
width, height, mid = s, s*2+3, (s*2+3)//2+1
digits = {'0':'1111110', '1':'0110000', '2':'1101101', '3':'1111001',
          '4':'0110011', '5':'1011011', '6':'1011111', '7':'1110000',
          '8':'1111111', '9':'1111011'}
result = ''
for d in n:
    result += ' ' + (' ' if digits[d][0] == '0' else '-') * width + '  '
result += '\n'
for i in range(height - mid - 1):
    for d in n:
        result += (' ' if digits[d][5] == '0' else '|' )+ ' ' * width
        result += '  ' if digits[d][1] == '0' else '| '
    result += '\n'
for d in n:
    result += ' ' + (' '*s if digits[d][6] == '0' else '-'*s) + '  '
result += '\n'
for i in range(height - mid - 1):
    for d in n:
        result += (' ' if digits[d][4] == '0' else '|' )+ ' ' * width
        result += '  ' if digits[d][2] == '0' else '| '
    result += '\n'
for d in n:
    result += ' ' + (' '*s if digits[d][3] == '0' else '-'*s) + '  '
result += '\n'
print(result)
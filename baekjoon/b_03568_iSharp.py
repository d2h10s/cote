
def main():
    s = input().replace(',', '')[:-1].split();
    _type = s[0]
    _var = s[1:]
    for _var in s[1:]:
        statement = _type
        names = ''.join([x for x in _var if x.isalpha()])
        types = ''.join([x for x in _var if not x.isalpha()])[::-1].replace(']', '!').replace('[', ']').replace('!','[')
        print(f'{statement}{types} {names};')

main()
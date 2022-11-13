val = 0
for i in range(int(input())):
    x = [x for x in input().split('X') if x][0]
    if x == '++':
        val += 1
    elif x == '--':
        val -= 1
print(val)
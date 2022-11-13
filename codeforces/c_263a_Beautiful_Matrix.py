for i in range(5):
    j = input().replace(' ', '').find('1')
    if j != -1:
        print(abs(2-i)+abs(2-j))
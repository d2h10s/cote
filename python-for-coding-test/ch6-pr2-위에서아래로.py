n = int(input())
num = sorted([int(input()) for i in range(n)],reverse=True)
print(num)
print(str(sorted(num))[1:-1].replace(',',''))

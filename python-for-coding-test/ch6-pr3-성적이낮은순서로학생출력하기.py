'''
2
홍길동 95
이순신 77
'''
n = int(input())
dic = dict(input().split() for _ in range(n))
print(sorted(dic, key=lambda k:int(dic[k])))

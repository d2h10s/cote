'''
메모이제이션(캐싱): 값을 기록하여 이미 푼 문제를 다시 호출 하지 않는다.
탑다운 방식: 큰 문제를 해결하기 위해 작은 문제를 호출한다.(재귀)
바텀업 방식: 작은 문제부터 시작하여 차근차근 답을 도출한다.(반복문)
'''
import time
d = [0]*1000
def fibo(x):
    if x < 3:
        return 1
    if not d[x]:
        d[x] = fibo(x-1)+fibo(x-2)
    return d[x]


s = time.time()
print(fibo(100))
print(time.time()-s)
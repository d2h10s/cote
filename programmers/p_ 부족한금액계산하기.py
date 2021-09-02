from functools import reduce
def solution(price, money, count):
    answer = reduce(lambda x,y:x+y,range(price,price*count+1,price),0)
    answer = max(1, answer - money)
    return answer
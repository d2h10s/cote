from functools import reduce
def solution(left, right):
    return reduce(lambda x,y: x+(-y if y**0.5-int(y**0.5)==0 else y), range(left, right+1), 0)
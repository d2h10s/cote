from functools import reduce
def solution(absolutes, signs):
    return reduce(lambda x,y : x+(y[0] if y[1] else -y[0]), zip(absolutes, signs), 0)
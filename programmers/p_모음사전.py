from itertools import product
def solution(word):
    a = sorted(list(set(''.join([y for y in x if y !='0']) for x in product(*['0AEIOU']*5))))
    return a.index(word)
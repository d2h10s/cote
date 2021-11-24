from collections import defaultdict
def solution(exp1, exp2):
    exp = [[int(y) for y in x.split('x^')] for x in exp1.split('+')]+\
        [[int(y) for y in x.split('x^')] for x in exp2.split('+')]
    exp.sort(key=lambda x: x[1])
    d = defaultdict(int)
    for e in exp:
        d[e[1]]+=e[0]
    answer = []
    for e in d:
        answer.append(f'{d[e]}x^{e}')
    return ' + '.join(answer[::-1])

a = solution('2x^5 + 3x^3 + 2x^1', '6x^6 + 4x^4 + 3x^3 + 2x^2')
print(a)
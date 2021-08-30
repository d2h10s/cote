from itertools import permutations
def solution(A, B):
    A.sort(); B.sort()
    p,q = 0,0
    answer = 0
    while True:
        if A[p] >= B[q]:
            q += 1
        else:
            p,q = p+1, q+1
            answer += 1
        #print(A[p:], B[q:], answer, sep='\n',end='\n\n')
        if p >= len(A) or q >= len(B):
            break
    return answer
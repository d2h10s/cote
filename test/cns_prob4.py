
def solution(cake, cut_col, cut_row):
    r,c, M = 0, 0, 0
    r_size, c_size = len(cake), len(cake[0])
    for i in cut_row+[r_size]:
        for j in cut_col+[c_size]:
            x = len(set(cake[a][b] for b in range(c,j) for a in range(r,i)))
            M = max(M,x)
            c = j
        r, c = i, 0
    return M
assert solution(["KKKK", "KKKK", "KKKK", "KKKA"], [2], [2,3]) == 2
'''
KK|K|K
KK|K|K
--|-|-
KK|K|K
KK|K|A

'''
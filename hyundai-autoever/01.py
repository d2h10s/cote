from itertools import combinations
def solution(num, k):
    answer = 1e10
    mod_num = 1000000007
    combi = list(combinations(range(1, len(num)), k))
    for com in combi:
        idx = 0
        s = 0
        for i in com:
            s = (s + int(num[idx:i]) % mod_num) % mod_num
            idx = i
        s = (s + int(num[idx:]) % mod_num) % mod_num
        answer = min(s, answer)
    return answer % mod_num

a = solution('1234567', 2)
print(a)

b = solution('555555', 2)
print(b)

c = solution('91911919', 3)
print(c)
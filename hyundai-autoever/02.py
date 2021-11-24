from itertools import permutations
def solution(num1, num2, num3):
	answer = 0
	permu = list(permutations([str(x) for x in range(8)], 8))
	maps = {chr(x):x-ord('a') for x in range(ord('a'), ord('i'))}
	m = 1e9
	for per in permu:
		a = int(''.join([per[maps[x]] for x in num1]), 8)
		b = int(''.join([per[maps[x]] for x in num2]), 8)
		c = int(''.join([per[maps[x]] for x in num3]), 8)
		if a+b == c:
			answer += 1
	return answer

a = solution('a', 'b', 'c')
print(a)

b = solution('abcdefg', 'abcdefg', 'h')
print(b)

c = solution('gfadafg', 'hfhbcg', 'gegaaac')
print(c)

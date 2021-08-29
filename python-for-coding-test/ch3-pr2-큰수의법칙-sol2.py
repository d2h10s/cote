n, m, k = map(int, input().split())
numbers = list(map(int, input().split()))
first = max(numbers)
numbers[numbers.index(first)] = -1
second = max(numbers)

n = m//(k+1)
res = m%(k+1)
s = first*k*n + second*n + first*res
print(s)

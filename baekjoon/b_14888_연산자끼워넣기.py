N = int(input())
A = list(map(int, input().split()))
n_add, n_sub, n_mul, n_div = list(map(int, input().split()))
answer = []
def dfs(_sum, idx):
    global n_add, n_sub, n_mul, n_div
    if idx > N - 1:
        answer.append(_sum)
    if n_add > 0:
        n_add -= 1
        dfs(_sum + A[idx], idx + 1)
        n_add += 1
    if n_sub > 0:
        n_sub -= 1
        dfs(_sum - A[idx], idx + 1)
        n_sub += 1
    if n_mul > 0:
        n_mul -= 1
        dfs(_sum * A[idx], idx + 1)
        n_mul += 1
    if n_div > 0:
        n_div -= 1
        dfs(int(_sum / A[idx]), idx + 1)
        n_div += 1

dfs(A[0], 1)
print(max(answer),min(answer),sep='\n')
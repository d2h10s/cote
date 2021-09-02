def dfs(n, x, cnt):
    if x == n:
        cnt[0] += 1
        return
    if x > n:
        return
    dfs(n,x+1, cnt)
    dfs(n,x+2, cnt)
    dfs(n,x+3, cnt)


for i in range(int(input())):
    n = int(input())
    answer = [0]
    dfs(n, 0, answer)
    print(answer[0])
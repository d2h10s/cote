target = input()
num_mal = int(input())
mal_btn = map(int, input().split())
for n in target[::-1]:
    if int(n) in mal_btn:
        
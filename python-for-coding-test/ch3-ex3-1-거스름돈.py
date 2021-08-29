w = int(input())
coins = [500, 100, 50, 10]
n = 0
for coin in coins:
    n += w // coin
    w %= coin
print(n)
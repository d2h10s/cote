x = int(input())
answer = 0
while x != 1:
    if x % 5 == 0:
        x /= 5
    elif (x-1) % 5 == 0:
        x -= 1
    elif x % 3 == 0:
        x /= 3
    elif x % 2 == 0:
        x /= 2
    else:
        x -= 1
    answer += 1
print(answer)

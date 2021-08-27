n = int(input())
b = [list(map(int, input().split())) for _ in range(n)]
'''
3
8 8 8
4 4 4
4 4 4
'''
def up():
    isdone = [[False for _ in range(n)] for _ in range(n)]
    for i in range(n-1):
        for j in range(n):
            if b[i+1][j] == b[i][j] and not isdone[i][j]:
                b[i+1][j] <<= 1; b[i][j] = 0
                isdone[i+1][j] = True

def down():
    isdone = [[False for _ in range(n)] for _ in range(n)]
    for i in range(n-1):
        for j in range(n):
            if b[i+1][j] == b[i][j] and not isdone[i][j]:
                b[i+1][j] <<= 1; b[i][j] = 0
                isdone[i+1][j] = True

def left():
    isdone = [[False for _ in range(n)] for _ in range(n)]
    for j in range(n-1, 0, -1):
        for i in range(n):
            if b[i][j-1] == b[i][j] and not isdone[i][j]:
                b[i][j-1] <<= 1; b[i][j] = 0
                isdone[i][j-1] = True

def right():
    isdone = [[False for _ in range(n)] for _ in range(n)]
    for j in range(n-1):
        for i in range(n):
            if b[i][j+1] == b[i][j] and not isdone[i][j]:
                b[i][j+1] <<= 1; b[i][j] = 0
                isdone[i][j+1] = True

print('\n'.join(str(line) for line in b))
right()
print('\n'.join(str(line) for line in b))
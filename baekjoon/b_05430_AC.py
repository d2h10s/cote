from collections import deque
T = int(input())

for i in range(T):
    command = input()
    n = int(input())
    arr = input()
    arr = deque(map(int,arr[1:-1].split(','))) if n != 0 else deque()
    err = False
    isRight = True
    for c in command:
        if c == 'D':
            if arr:
                if isRight:
                    arr.popleft()
                else:
                    arr.pop()
            else:
                err = True
                break
        elif c == 'R':
            isRight = not isRight
    if err:
        print('error')
    else:
        if not isRight:
            arr.reverse()
        print(str(list(arr)).replace(' ', ''))
        
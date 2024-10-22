n = int(input())

dirs = {'N':(-1,0), 'S':(1,0), 'E':(0,1), 'W':(0,-1)}
dirs_str = ['N', 'E', 'S', 'W']
def solution():
    for i in range(n):
        command = input()
        now = [0, 0]
        dir = 'N'
        x0, x1, y0, y1 = 0, 0, 0, 0
        for c in command:
            if c == 'F':
                now = [now[0] + dirs[dir][0], now[1] + dirs[dir][1]]
            elif c == 'B':
                now = [now[0] + dirs[dir][0]*-1, now[1] + dirs[dir][1]*-1]
            elif c == 'L':
                n_idx = dirs_str.index(dir)
                dir = dirs_str[(n_idx-1)%4]
            elif c == 'R':
                n_idx = dirs_str.index(dir)
                dir = dirs_str[(n_idx + 1) % 4]
            x0 = min(x0, now[1])
            x1 = max(x1, now[1])
            y0 = min(y0, now[0])
            y1 = max(y1, now[0])
        print((x1-x0)*(y1-y0))

solution()
from itertools import combinations

class place:
    def __init__(self, r, c):
        self.r, self.c = r,c
    def cal_dist(self, other):
        return abs(other.r-self.r)+abs(other.c-self.c)

n, m = map(int, input().split())
town = [list(map(int, input().split())) for _ in range(n)]
chicken_list = []
home_list = []

for i in range(n):
    for j in range(n):
        if town[i][j] == 0x01:
            home_list.append(place(i, j))
        elif town[i][j] == 0x02:
            chicken_list.append(place(i, j))

com_list = combinations(chicken_list, m)
chicken_dist = 10000
for com in com_list:
    ch = sum([min([h.cal_dist(x) for x in com]) for h in home_list])
    chicken_dist = ch if ch < chicken_dist else chicken_dist
        
print(chicken_dist)
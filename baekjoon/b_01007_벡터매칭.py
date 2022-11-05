from itertools import permutations
from functools import reduce
from math import *


class Point:
    def __init__(self, x, y):
        self.x, self.y = x, y
    def __add__(self, other):
        return Point(self.x + other.x, self.y + other.y)
    def __sub__(self, other):
        return Point(self.x - other.x, self.y - other.y)
    def __str__(self):
        return f"({self.x},{self.y})"
    def __repr__(self):
        return self.__str__()
    def size(self):
        return sqrt(self.x*self.x+self.y*self.y)
    
class Vector(Point):
    def __init__(self, P1: Point, P2: Point):
        v = (P2-P1)
        self.x, self.y = v.x, v.y
    

t = int(input())
for tc in range(t):
    n = int(input())
    points = [Point(*map(int, input().split())) for _ in range(n)]
    print(points)
    coms = list(permutations(points, n))
    vecs = [[Vector(com[i*2], com[i*2+1]) for i in range(len(com)//2)] for com in coms]
    vec_set = [reduce(lambda x,y:(x+y),vec,Vector(Point(0,0),Point(0,0))).size() for vec in vecs]
    
    print(min(vec_set))
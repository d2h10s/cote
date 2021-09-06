def solution(list1, list2, friend1, friend2):
    g = [set() for _ in range(len(list1)+1)]
    for i in range(len(list1)):
        g[list1[i]].add(list2[i])
        g[list2[i]].add(list1[i])
    return min(list(g[friend1] & g[friend2]))


assert solution([1,2,3,4,5,6,7], [2,5,1,1,6,3,7], 2, 3) == 1
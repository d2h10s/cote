def c(n,r):
    isVisited = [True]+[False for _ in range(n)]
    i = 1
    pre_i = 1
    temp = []
    result = []
    while True:
        if len(temp) == r:
            result.append(temp)
            print(temp)
            temp.pop()
        if all(isVisited) == True:
            break
        if isVisited[i] == False:
            isVisited[i] = True
            temp.append(i)
        else:
            isVisited[pre_i] = False
            temp.pop()

c(3,2)
def solution(weights):
    i = 0
    while len(weights) > 4:
        if weights[i] < weights[i+1]:
            weights.pop(i)
            i += 1
        elif weights[i] > weights[i+1]:
            weights.pop(i+1)
            i += 1
        else:
            i += 2
        if i > len(weights)-1:
            i = 0
            print(weights)
    print(weights)

assert solution([1,7,2,4,5,9,3,22,72,41]) == [7,9,22,72]
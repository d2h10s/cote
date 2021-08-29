def solution(numbers):
    answer = []
    for num in numbers:
        if num % 2 == 0:
            answer.append(num+1)
        else:
            bi = '0'+format(num, 'b')
            lbi = list(bi)
            idx = bi.rfind('0')
            lbi[idx:idx+2] = ['1','0']
            bi = ''.join(lbi)
            answer.append(int(bi, 2))
    return answer
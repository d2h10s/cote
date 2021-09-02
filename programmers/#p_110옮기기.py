def solution(s):
    answer = []
    for b in s:
        answer.append('')
        while b:
            idx = b.find('110')
            if idx == -1:
                if f'{b:1<3}'=='111':
                    answer[-1] += b
                else:
                    answer[-1] = b + answer[-1]
                break
            b = b[:idx]+b[idx+3:]
            idx = b.find('111')
            if idx != -1:
                answer[-1] += b[:idx]+'110'
                b = b[idx:]
            else:
                answer[-1] += '110'+b
                break
            if len(b) < 3:
                if f'{b:1<3}'=='111':
                    answer[-1] += b
                else:
                    answer[-1] = b + answer[-1]
                break
            print(answer, b)
    return answer
a = solution(["1110", "100111100", "0111111010"])
print(a)
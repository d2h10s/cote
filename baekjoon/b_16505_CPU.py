opcode = {'ADD': '0000', 'SUB': '0001', 'MOV': '0010', 'AND': '0011', 'OR': '0100', 'NOT': '0101',
          'MULT': '0110', 'LSFTL': '0111', 'LSFTR':'1000', 'ASFTR': '1001', 'RL': '1010', 'RR': '1011'}
def solution():
    n = input()
    for i in range(int(n)):
        answer = ''
        op, rD, rA, sC = input().split()
        if opcode.get(op,False):
            answer += opcode[op] + '00'
        elif opcode.get(op[:-1], False):
            answer += opcode[op[:-1]] + '10'
        answer += f'{int(rD):03b}{int(rA):03b}'
        if answer[4] == '0':
            answer += f'{int(sC):03b}0'
        else:
            answer += f'{int(sC):04b}'
        print(answer)
solution()
from sys import stdin
p = sorted([[int(x) for x in stdin.readline().split()] for _ in range(int(stdin.readline()))],key=lambda x:(x[1],x[0]))
print('\n'.join([' '.join([str(y) for y in x]) for x in p]))
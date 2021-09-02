from sys import stdin,stdout
n = int(stdin.readline())
x = [int(x) for x in stdin.readline().split()]
d = {k:i for i,k in enumerate(sorted(list(set(x))))}
stdout.write(' '.join([str(d[i]) for i in x]))
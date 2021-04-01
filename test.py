for i in range(1,10):
    for j in range(1,i):
        print(' '*7, end='')
    for j in range(i,10):
        print('{}*{}={:2} '.format(i, j, j*i), end='')
    print()
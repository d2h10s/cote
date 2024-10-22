while (n := int(input().strip())) != -1:
  res = [x for x in range(1, n) if n%x==0]
  if sum(res)==n:
    print(f"{n} = {' + '.join(map(str, res))}")
  else:
    print(f'{n} is NOT perfect.')
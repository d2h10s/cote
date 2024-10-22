T = int(input().strip()) # 2
for _ in range(T):
  N = int(input().strip()) # 3
  M = ('default', 0)
  for _ in range(N):
    # Yonsei 10 -> list ['Yonsei', '10']
    A, B = [x if x.isalpha() else int(x) for x in input().split()]
    M = (A, B) if B > M[1] else M
  print(M[0])
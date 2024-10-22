def isCorrect_Sudoku(sudoku: list[list]) -> bool:
  for j in range(9):
    if (len(set(sudoku[j])) != 9) or (len(set([x[j] for x in sudoku])) != 9):
      return False

  for j in range(9):
    r, c = j//3*3, j%3*3
    sudoku_sub = []
    for k in range(3):
      sudoku_sub += sudoku[r+k][c:c+3]
    if len(set(sudoku_sub)) != 9:
      return False
  return True

T = int(input().strip())

for i in range(T):
  if i: input() # empty line
  sudoku = [list(map(int, input().strip().split())) for x in range(9)]
  res = isCorrect_Sudoku(sudoku)
  print(f'Case {i+1}: {"CORRECT" if res else "INCORRECT"}')
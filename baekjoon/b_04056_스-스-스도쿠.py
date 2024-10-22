from itertools import product
# import sys

# validated
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

# with open('input.txt','r') as sys.stdin:
T = int(input().strip())
for t in range(T):
  if t: print()
  sudoku = [[int(x) for x in input().strip()] for _ in range(9)]
  blank = [(i,j) for i in range(9) for j in range(9) if sudoku[i][j] == 0]
  isCorrect = False
  prod = list(product(range(1,10), repeat=len(blank)))
  for nums in prod:
    for i, num in enumerate(nums):
      sudoku[blank[i][0]][blank[i][1]] = num
    if isCorrect_Sudoku(sudoku):
      isCorrect = True
      break
  if isCorrect:
    print('\n'.join([''.join(map(str,x)) for x in sudoku]))
  else:
    print("Could not complete this grid.")
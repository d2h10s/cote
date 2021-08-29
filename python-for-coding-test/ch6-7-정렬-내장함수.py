import random
arr = [random.randint(1,10) for x in range(10)]
print(arr)

result = sorted(arr) # 정렬 된 리스트를 반환
print(result)

arr.sort() # 리스트 내부를 정렬시킴
print(arr)
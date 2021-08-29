import random
arr = [random.randint(1,10) for x in range(10)]
print(arr)

def insertion_sort(arr):
    for i in range(1,len(arr)):
        for j in range(i,0,-1):
            if arr[j] < arr[j-1]:
                arr[j], arr[j-1] = arr[j-1], arr[j]
            else:
                break

insertion_sort(arr)
print(arr)
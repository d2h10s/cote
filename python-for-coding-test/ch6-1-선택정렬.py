import random
arr = [random.randint(1,10) for x in range(10)]
print(arr)

def selection_sort(arr):
    for i in range(len(arr)-1):
        min_idx = arr[i:].index(min(arr[i:]))+i
        arr[i], arr[min_idx] = arr[min_idx], arr[i]

selection_sort(arr)
print(arr)
import time
def fibo(x):
    if x < 3:
        return 1
    return fibo(x-1)+fibo(x-2)
s = time.time()
print(fibo(35))
print(time.time()-s)
a = []
for i in range(1,101):
    if i % 3 == 0:
        i = i * i
        a.append(i)

print(a)
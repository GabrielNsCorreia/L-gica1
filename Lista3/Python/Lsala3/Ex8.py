x = 0
y = 1
for c in range(0, 16, 1):
    print(x)
    temp = x
    x = y
    y = temp + y

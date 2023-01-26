def find_m(n, x):
    m = n
    for i in range(log2(), -1, -1):
        if (x >> i) & 1 == 0:
            m |= (1 << i)
    return m

print(find_m(10, 8))
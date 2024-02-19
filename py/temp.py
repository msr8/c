def fun(n) :
    k = 0
    for i in range(n // 2, n):
        j = 2
        while j <= n:
            k +=n// 2
            i *= 2
    return k
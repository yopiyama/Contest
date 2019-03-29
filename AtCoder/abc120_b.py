def gcd(a, b):
    if a < b:
        a, b = b, a
    while b:
        a, b = b, a % b
    return a


A, B, K = map(int, input().split())

x = gcd(A, B)
y = list()
for i in range(1, x+1):
    if x % i == 0:
        y.append(i)
y = y[::-1]
print(y[K-1])

N, M, C = map(int, input().split())
B = list(map(int, input().split()))
count = 0
for i in range(N):
    A = list(map(int, input().split()))
    x = C
    for index, val in enumerate(B):
        x += A[index] * val
    if x > 0:
        count += 1
print(count)

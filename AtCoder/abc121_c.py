N, M = map(int, input().split())
d = dict()

for i in range(N):
    tmp_key, tmp_val = map(int, input().split())
    if tmp_key in d:
        d[tmp_key] += tmp_val
    else:
        d[tmp_key] = tmp_val

cost = 0
while M > 0:
    tmp_key = min(d)
    tmp_val = d[tmp_key]
    if M - tmp_val < 0:
        cost += tmp_key * M
        break
    else:
        cost += tmp_key * tmp_val
        M -= tmp_val
        del d[tmp_key]

print(cost)

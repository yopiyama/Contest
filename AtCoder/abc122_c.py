N, Q = map(int, input().split())
S = input()
for i in range(Q):
    tmp = input().split()
    print(S[int(tmp[0]) - 1: int(tmp[1])].count("AC"))

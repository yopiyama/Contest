S = list(input())
ACGT = []
tmp = ""
for i, s in enumerate(S):
    if s == "A" or s == "C" or s == "G" or s == "T":
        tmp += s
        if i == len(S)-1:
            ACGT.append(tmp)
            break
    else:
        ACGT.append(tmp)
        tmp = ""

print(len(sorted(ACGT, key=lambda x: len(x))[len(ACGT)-1]))

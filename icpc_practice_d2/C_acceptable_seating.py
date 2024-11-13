r, c = map(int, input().split())

l = r*c

permA = []
for i in range(r):
    permA.extend(map(int, input().split()))
permB = []
for i in range(r):
    permB.extend(map(int, input().split()))

ipa = [0] * l
for i in range(l):
    permA[i] -= 1
    ipa[permA[i]] = i

ipb = [0] * l
for i in range(l):
    permB[i] -= 1
    ipb[permB[i]] = i


# this takes r*c*c moves in the worst case
moves = []
for i in range(l):
    if ipa[i] != ipb[i]:
        to_swap = []
        cj = ipa[i]
        while permA[cj] < permA[ipb[i]]:
            to_swap.append(cj)
            cj += 1
            if cj % c == 0:
                break

        for k in to_swap[::-1]:
            moves.append((ipb[i], k))
            permA[ipb[i]], permA[k] = permA[k], permA[ipb[i]]
            ipa[permA[ipb[i]]], ipa[permA[k]] = ipb[i], k


for i in range(r*c):
    if permA[i] != permB[i]:
        print("BAD!!!!")
        exit()
print(len(moves))
fmt = lambda x: f"{x//c+1} {x%c+1}"
for a, b in moves:
    print(fmt(a), fmt(b))
